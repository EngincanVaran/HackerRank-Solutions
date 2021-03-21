int sockMerchant(int n, vector<int> ar) {
    int pairs = 0;
    vector<int> temp(101,0);
    for(int i=0; i<ar.size();i++)
    {
        temp[ar[i]]++;
    }

    for(int i=1; i<temp.size();i++)
    {
        pairs += temp[i] / 2;
    }
    return pairs;
}

