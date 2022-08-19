#include<bits/stdc++.h>
using namespace std;

int main()
{

  int temp;
  cin>>temp;
  while(temp--)
    {
    int n;
  cin>>n;

  int a,b,sum=0;
  cin>>a;
  cin>>b;
  for(int i=3;i<=n;i++)
    {
      int c;
      cin>>c;
      if(a!=c && a==b)
      {
        sum=i;
      }
      else if(a!=b && a==c)
      {
        sum=i-1;
      }
      else if(a!=b && b==c)
      {
        sum=i-2;
      }
        

      a=b;
      b=c;
    }

  cout<<sum<<endl;

      }
  
 return 0;
}
