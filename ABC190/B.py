n, s, d = map(int,input().split())

frag = 0

for i in range(n):
  X, Y = map(int, input().split())
  if X<s and d<Y:
    frag = 1

if frag:
  print("Yes")
else:
  print("No")
