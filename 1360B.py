if __name__=='__main__':
  n=int(input())
  for i in range(n):
    value=int(input())
    li=[int(x) for x in input().split()]
    li.sort()
    diff=9999
    for i in range(1,len(li)):
      diff=min(diff,(li[i]-li[i-1]))
    print(diff)
    
      
