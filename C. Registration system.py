if __name__=='__main__':
  dic={}
  n=int(input())
  for i in range(n):
    s=str(input())
    if s not in dic:
      print('OK')
      dic[s]=1
    else:
      print(s+str(dic[s]))
      dic[s]+=1
