///Python 3

def solve(n):
  k=1
  ans=[]
  if len(n)!=1:
    k=len(n)-n.count('0')
  for i in range(len(n)):
    if(n[i]!='0'):
      ans.append(n[i]+'0'*(len(n)-i-1))
  print(k)
  print(*ans)



if __name__=='__main__':
  for i in range(int(input())):
    solve(str(input()))
    
    
    
