#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
    {
      long long int a,b;
      cin>>a>>b;
      long long int count=0;
      if(a%b==0)
      {
      cout<<"0"<<endl;
      }
      else
      {
        cout<<b-(a%b)<<endl;
      }
    }

  return 0;
}
