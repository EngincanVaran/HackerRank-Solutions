def sherlockAndAnagrams(s):
    
    dic = {}
    count = 0

    for i in range(len(s)):
        for j in range(i,len(s)):
            substrs = str(sorted(s[i:j+1]))
            
            if (substrs not in dic):
                dic[substrs] = 1
            else:
                count += dic[substrs]
                dic[substrs] += 1

    return count