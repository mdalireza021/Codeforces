if __name__=='__main__':
  t=int(input())
  for i in range(t):
    n=str(input())
    digit=int(n[0])-1
    count=n.count(n[0])
    if count==1:
      print(digit*10+count)
    elif count==2:
      print(digit*10+count+1)
    elif count==3:
      print(digit*10+count+3)
    else:
      print(digit*10+count+6)
  
    
    
