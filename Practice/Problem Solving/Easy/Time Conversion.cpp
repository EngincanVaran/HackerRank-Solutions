string timeConversion(string s) {
    /*
     * Write your code here.
     */

    string result;
    string hour = s.substr(0,1) + s.substr(1,1);
    
    int h = stoi(hour);

    if(s.at(8) == 'P')
    {
        h += 12;
        if(h==24)
            h = 12;
    }
    
    else if(h==12)
    {
        h = 0;
    }

    hour = to_string(h);

    if(hour.length() == 1)
    {
        hour = "0" + hour;
    }

    result = hour + s.substr(2,s.length()-4);

    return result;
}