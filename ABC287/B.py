n,m = input().split(" ")
n = int(n)
m = int(m)
n_list = []
m_list = []

for i in range(0,n):
  tmp1 = input()
  n_list.append(tmp1)

for i in range(0,m):
  tmp2 = input()
  m_list.append(tmp2)

count = 0
for j in n_list:
  skip_frag = False
  for k in m_list:
    if skip_frag == False and j[3:6]==k[0:3]:
      count += 1
      skip_frag = True
print(count)
