vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int A=0,B=0;
    vector<int> result(2);
    for(int i=0; i < a.size();i++)
    {
        if(a[i]>b[i])
            A++;
        else if (a[i]<b[i])
            B++;
    }
    result[0] = A;
    result[1] = B;
    return result;
}