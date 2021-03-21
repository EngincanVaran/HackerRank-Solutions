def pickingNumbers(a):

    maxi = 0
    for i in a:
        
        l = a.count(i)
        h = a.count(i+1)
        
        tot = l+h

        if (maxi < tot):
            maxi = tot
        
    return maxi