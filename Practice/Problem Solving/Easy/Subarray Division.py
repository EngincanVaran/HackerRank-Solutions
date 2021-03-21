def birthday(s, d, m):

    count = 0

    for i in range(len(s)):
        if i+m<=len(s):
            total = 0
            for j in range(m):
                total += s[i+j]
                #print(s[i],total,s[i+j])
            
            if total == d:
                count += 1

    return count

