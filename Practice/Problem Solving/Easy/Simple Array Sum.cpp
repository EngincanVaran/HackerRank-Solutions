int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
     */
     int sum = 0;
     for (int i=0; i<ar.size();i++)
        sum += ar[i];
     return sum;
}