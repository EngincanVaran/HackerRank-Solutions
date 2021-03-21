void miniMaxSum(vector<int> arr) {
    unsigned int max=arr[0],min=arr[0],sum=0;
    for(int i=0; i<arr.size();i++)
    {
        if(arr[i]>max)
            max = arr[i];
        else if (arr[i]<min)
            min = arr[i];
        sum += arr[i];
    }
    cout << sum-max << " " << sum - min;
}