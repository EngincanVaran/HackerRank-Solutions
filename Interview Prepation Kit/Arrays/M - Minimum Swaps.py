def minimumSwaps(arr):
    count = 0
    n = len(arr)

    for i in range(n):
        while(arr[i] != i+1 ):
            temp = arr[i] - 1
            arr[i], arr[temp] = arr[temp], arr[i]
            count += 1
    
    return count