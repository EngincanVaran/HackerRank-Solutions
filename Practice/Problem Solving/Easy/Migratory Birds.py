def migratoryBirds(arr):

    bucket = [0 for i in range(max(arr)+1)]

    for i in arr:
        bucket[i] += 1
    
    print(bucket)

    return bucket.index(max(bucket))