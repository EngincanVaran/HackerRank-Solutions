def freqQuery(queries):
    freqDic = {}
    numDic = {}
    res = []
    for tup in queries:
        # print("Tuple: ", tup)
        if tup[0] == 1:
            if tup[1] in numDic.keys():
                numDic[tup[1]] += 1
                freqDic[numDic[tup[1]]-1].remove(tup[1])
            else:
                numDic[tup[1]] = 1
            
            if numDic[tup[1]] in freqDic.keys():
                freqDic[numDic[tup[1]]].append(tup[1])
            else:
                freqDic[numDic[tup[1]]] = [tup[1]]
        
        elif tup[0] == 2:
            if tup[1] in numDic.keys() and numDic[tup[1]] != 0:
                numDic[tup[1]] -= 1
                freqDic[numDic[tup[1]]+1].remove(tup[1])
                
                if numDic[tup[1]] in freqDic.keys():
                    freqDic[numDic[tup[1]]].append(tup[1])
                else:
                    freqDic[numDic[tup[1]]] = [tup[1]]
                    
        else:
            if tup[1] in freqDic.keys() and len(freqDic[tup[1]])>0:
                res.append("1")
            else:
                res.append("0")
        
        #print("Freq Dic: ", freqDic)
        #print("Num Dic: ", numDic)
    return res