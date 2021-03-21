def getMoneySpent(keyboards, drives, b):

    sums = []
    for i in keyboards:
        for j in drives:
            if( i+j <= b):
                sums.append( i+j )

    if len(sums)==0:
        return -1
    else:
        return max(sums)