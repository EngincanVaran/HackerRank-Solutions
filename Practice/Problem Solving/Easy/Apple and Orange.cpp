void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    int acount = 0, ocount = 0;

    for(int i=0; i<apples.size();i++)
    {
        //cout << apples[i] << endl;
        if(apples[i] > 0 )
        {
            //cout << s << " " << a+apples[i] << " " << t << " ";
            if( (a+apples[i]) >= s && (a+apples[i])<= t)
                acount++;
        }
    }

    for(int i=0; i<oranges.size();i++)
    {
        //cout << oranges[i] << endl;
        if(oranges[i] < 0 )
        {
            //cout << s << " " << b+oranges[i] << " " << t << endl;
            if(b+oranges[i]<=t && b+oranges[i]>=s)
                ocount++;
        }
    }

    cout << acount << endl << ocount;

}