vector<int> rotLeft(vector<int> a, int d) {
    
    vector<int> res(a.size());

    int index = 0;

    for(int i=0;i<a.size();i++)
    {
        index = i - d;
        if(index < 0)
            index += a.size();
        res[index] = a[i];
    }

    return res;
}