void plusMinus(vector<int> arr) {
    double p=0,n=0,z=0;
    for(int i=0; i<arr.size();i++)
    {
       if(arr[i] > 0)
            p++;
        else if (arr[i] < 0)
            n++;
        else
            z++;
    }
    cout << p/arr.size() << endl << n/arr.size() << endl << z/arr.size();
}

