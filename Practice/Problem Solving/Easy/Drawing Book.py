def pageCount(n, p):

    counts = [0,0]

    if n == p+1:
        counts[1] += 1

    for i in range(1,n,2):
        if i == p or i == p+1:
            break
        counts[0] += 1
    
    for i in range(n,1,-2):
        if i == p or i == p+1:
            break
        counts[1] += 1

    return min(counts)