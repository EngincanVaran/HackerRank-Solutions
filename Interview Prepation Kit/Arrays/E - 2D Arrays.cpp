int hourglassSum(vector<vector<int>> arr) {

    int max = INT_MIN, sum;
    int row = arr.size(), column = arr[0].size();
    for(int r=0; r<row-2; r++)
    {
        for(int c=0; c<column-2;c++)
        {
            sum = 0;
            for(int i=0; i<3;i++)
            {
                for(int j=0; j<3; j++)
                {
                    //cout << arr[r+i][c+j];
                    if(i==1 && j==1)
                    {
                        sum += arr[r+i][c+1];
                    }
                    else if (i==1 && j!=1) {
                    }
                    else {
                        sum += arr[r+i][c+j];
                    }
                }
                //cout << endl;
            }
            //cout << endl;
            //cout << sum << endl;
            if(sum>max)
                max=sum;
        }
    }


    return max;
}