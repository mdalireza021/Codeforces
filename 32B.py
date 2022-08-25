if __name__=='__main__':
  n=input()
  i=0
  while i<len(n):
    try:
      if n[i]=='.':
        print(0,end='')
        i+=1
      elif n[i]=='-' and n[i+1]=='.':
        i=i+2
        print(1,end='')
        
      else:
        i=i+2
        print(2,end='')
        
    except:
      None
    
    
    
