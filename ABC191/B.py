n,x = (int(y) for y in input().split())

a = list(map(int,input().split()))

for i in range(0,n):
  if a[i] == x:
    continue
  else:
    print(a[i],end = " ")
