def mgc(arr,n):
    if arr == arr[::-1]:
        return 0
    temp = []
    for i in range(n//2):
        x = arr[n-i-1] - arr[i]
        if x<0:
            return -1
        else:
            temp.append(x)
    #print(temp)
    ans = 0
    for i in range(len(temp)-1,-1,-1):
        if ans > temp[i]:
            return -1
        ops = (temp[i]-ans)
        ans += ops
    return ans
        

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    print(mgc(arr,n))