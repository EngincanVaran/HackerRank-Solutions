int diagonalDifference(vector<vector<int>> arr) {
    int lr = 0, rl = 0;
    for(int i=0;i<arr.size();i++)
    {
        lr += arr[i][i];
        rl += arr[i][arr.size()-i-1];
    }
    if(lr<rl)
        return rl-lr;
    return lr-rl;
}

