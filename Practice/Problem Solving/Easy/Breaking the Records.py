def breakingRecords(scores):
    maxScore = scores[0]
    minScore = scores[0]

    minCount = 0
    maxCount = 0

    for i in scores:
        if i>maxScore:
            maxCount+=1
            maxScore = i
        if i<minScore:
            minCount+=1
            minScore = i

    return maxCount, minCount