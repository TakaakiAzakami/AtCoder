num = input()
falist = []
yes_num = 0
no_num = 0

for i in range(0,int(num)):
  tmp = input()
  if tmp == "For":
    yes_num += 1
  else:
    no_num += 1
    
if yes_num > no_num:
  print("Yes")
else:
  print("No")
  
