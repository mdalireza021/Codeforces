#include<bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;
  while(t--)
    {
      int a,b;
      cin>>a>>b;

      int x=min(max(2*a,b),max(2*b,a));
      cout<<x*x<<endl;
    }
    return 0;
}
