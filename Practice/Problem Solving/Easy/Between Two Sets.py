def lcm(a, b):
    return math.ceil(a * b / (math.gcd(a, b)))

def getTotalX(a, b):
    # Write your code here
    maxNum = min(b)

    myLCM = a[0]

    for i in a:
        myLCM = (lcm(myLCM,i))

    print("LCM - ", myLCM)
    
    tempLCM = myLCM
    
    testList = []
    while(tempLCM <= maxNum):
        testList.append(tempLCM)
        tempLCM += myLCM

    print(testList)
    count = 0

    for i in testList:
        flag = True
        for j in b:
            if j % i != 0:
                flag = False
        if(flag):
            count += 1

    return count

