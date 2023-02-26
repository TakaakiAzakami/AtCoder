num = input().split(" ")

t = []
for i in range(0,int(num[1])):
  tmp = input()
  t.append(tmp)

b=sorted(t)

for i in range(len(b)):
  print(b[i])
