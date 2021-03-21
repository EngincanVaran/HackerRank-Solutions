int birthdayCakeCandles(vector<int> ar) {
    int count=0,max=ar[0];
    for(int i=0; i<ar.size(); i++)
    {
        if(ar[i] > max)
        {
            max = ar[i];
            count = 1;
        }
        else if(ar[i] == max)
            count++;
    }
    return count;
}