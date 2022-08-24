if __name__=='__main__':
  n=int(input())
  for i in range(n):
    t=int(input())
    li=[int(n) for n in input().split()]
    print(max(li)-min(li))
    
