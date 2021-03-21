vector<int> gradingStudents(vector<int> grades) {
    for(int i=0; i<grades.size();i++)
    {
        int x=0;
        while(grades[i] % 5 != 0)
        {
            grades[i]++;
            x++;
        }
        grades[i] -= x;
        if (! (grades[i] < 38) && (x<3) )
        {
            grades[i]+=x;
        }
    }
    return grades;
}