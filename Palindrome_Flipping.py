for _ in range(int(input())):
    n = int(input())
    s = input()
    countZero = s.count('0')
    countOne = s.count('1')
    print('NO') if countZero%2!=0 and countOne%2!=0 else print('YES')
