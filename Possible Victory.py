r,o,c=map(int,input().split())
remaining_over=20-o
maxscore=remaining_over*6*6
total_score=c+maxscore
if total_score>r:
  print("YES")
else:
  print("NO")
