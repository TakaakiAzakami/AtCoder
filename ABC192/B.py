s = input()

if len(s) == 1:
  if s.islower():
    print("Yes")
  else:
    print("No")
    
else:
  s0 = s[0]
  s1 = s[1]

  for i in range(2,len(s)):
    if i%2 == 0:
      s0 += s[i]
    else:
      s1 += s[i]

  if s0.islower() and s1.isupper():
    print("Yes")
  else:
    print("No")
