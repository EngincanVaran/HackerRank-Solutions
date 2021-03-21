def minimumBribes(q):
    count = 0
    q = [i-1 for i in q]
    
    for i,P in enumerate(q):
        if P-i > 2:
            print("Too chaotic")
            return
        
        for j in range(max(P-1,0),i):
            if q[j] > P:
                count += 1
    
    print(count)