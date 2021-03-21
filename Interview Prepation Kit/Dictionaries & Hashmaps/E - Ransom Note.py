def checkMagazine(magazine, note):
    
    dic = {}

    for i in magazine:
        if i in dic:
            dic[i] += 1
        else:
            dic[i] = 1

    flag = True
    for i in note:
        if i in dic and dic[i] > 0:
            dic[i] -= 1
        else:
            flag = False
            print("No")
            break
    
    if flag:
        print("Yes")