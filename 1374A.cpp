#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
    {
  int x,y,n;
  cin>>x>>y>>n;
  int p=(n-y)/x;
  cout<<p*x+y<<endl;
      }
	return 0;
}
