for _ in range(int(input())):
    x = int(input())
    s = input()
    c = s.count("C")
    d = s.count("D")
    n = s.count("N")
    c = c * 2 + d
    n = n * 2 + d
    if c > n:
        print(60 * x)
    elif c < n:
        print(40 * x)
    else:
        print(55 * x)
