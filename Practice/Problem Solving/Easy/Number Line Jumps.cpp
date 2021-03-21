string kangaroo(int x1, int v1, int x2, int v2) {

    int diffV = v1 - v2 , diffX = x1-x2;

    if(diffV > 0 && diffX > 0)
        return "NO";
    else if(diffV < 0 && diffX <0)
        return "NO";
    else if(diffV > 0 && diffX < 0)         // 2 önde, 1 hızlı
    {
        cout << "12" << endl;
        int tempx1 = x1, tempx2 = x2;
        while(tempx2 >= tempx1)
        {
            tempx1 += v1;
            tempx2 += v2;
            if(tempx2 == tempx1)
                return "YES";
        }
        return "NO";
    }
    else if(diffV < 0 && diffX > 0)         // 1 önde, 2 hızlı
    {
        cout << "21" << endl;
        int tempx1 = x1, tempx2 = x2;
        while(tempx2 <= tempx1)
        {
            tempx1 += v1;
            tempx2 += v2;
            if(tempx2 == tempx1)
                return "YES";
        }
        return "NO";
    }
    else {
        return "NO";
    }
}