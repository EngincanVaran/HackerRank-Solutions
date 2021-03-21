long repeatedString(string s, long n) {
    long count, mcount = 0;
    long lenght = s.size();
    long mod = n%lenght;
    long div = n/lenght;

    for(long i=0;i<lenght;i++)
    {
        if(s.at(i) == 'a')
            mcount ++;
    }

    count = mcount * div;

    for(long i=0;i<mod;i++)
    {
        if(s.at(i) == 'a')
            count++;
    }

    return count;
}