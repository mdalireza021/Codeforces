if __name__=='__main__':
  a,b=map(int,input().split())
  s=a
  while a>=b:
    s=s+(a//b)
    a=(a//b)+(a%b)
  print(s)
