p_min = 1.0e09+7
n = int(input())
a = []
p = []
x = []
for i in range(n):
  A,P,X = map(int,input().split())
  a.append(A)
  p.append(P)
  x.append(X)
  

for i in range(n):
  if a[i] < x[i]-0.5 :
    p_min = min(p_min,p[i])

if p_min == 1.0e09+7:
  print(-1)
else:
  print(p_min)
