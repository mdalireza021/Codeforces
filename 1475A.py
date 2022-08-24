if __name__=='__main__':
  t=int(input())
  for i in range(t):
    n=int(input())
    if(n&(n-1)):
      print('YES')
    else:
      print('NO')
