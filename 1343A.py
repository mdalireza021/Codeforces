if __name__=='__main__':
  t=int(input())
  for i in range(t):
    n=int(input())
    for j in range(2,int(10e9)):
      x=int(pow(2,j)-1)
      if(n%x==0):
        print(int(n/x))
        break;
