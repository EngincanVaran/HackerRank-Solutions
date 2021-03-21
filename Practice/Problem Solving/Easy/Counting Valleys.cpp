int countingValleys(int n, string s) {
    int alt = 0, prealt, valley=0;
    for(int i=0;i<n;i++)
    {
        prealt = alt;
        if(s.at(i) == 'U')
            alt++;
        else
            alt--;
        
        if(prealt < 0 && alt ==0)
            valley++;
    }
    return valley;
}