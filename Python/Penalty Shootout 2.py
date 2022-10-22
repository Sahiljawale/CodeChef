T = int(input())
for t in range(T):
    N = int(input())
    S = input()
    L = 2*N 
    
    currScoreA = 0
    currScoreB = 0
    leftShotA = N 
    leftShotB = N 
    
    winVar = L
    
    for i in range(L):
        if S[i] == '1':
            if i % 2 == 0:
                currScoreA += 1 
            else:
                currScoreB += 1 
    
        if i % 2 == 0:
            leftShotA = leftShotA - 1 
        else:
            leftShotB = leftShotB - 1 
        
        if currScoreA > currScoreB + leftShotB:
            winVar = i +  1 
            break
        if currScoreB > currScoreA + leftShotA:
            winVar = i + 1 
            break
    
    print(winVar)

        
