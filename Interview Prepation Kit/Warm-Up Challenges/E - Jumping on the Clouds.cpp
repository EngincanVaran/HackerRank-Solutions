int jumpingOnClouds(vector<int> c) {

    int jumps=0, i=0;

    while(i<c.size()-1)
    {
        if(i+2<c.size() && c[i+2] == 0)
            i+=2;
        else if(i+1<c.size() && c[i+1] == 0)
            i++;
        jumps++;
    }
    return jumps;
}