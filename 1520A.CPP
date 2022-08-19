#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int val;
      cin>>val;
      string s;
      cin>>s;

      unordered_map<char,bool> um;

      for(int i=0;i<val;i++)
    {
      if(um.find(s[i])!=um.end() && s[i]!=s[i-1])
      {
        cout<<"NO"<<endl;
        return ;
      }

      else

      {
        um[s[i]]=true;

      }
    }

  cout<<"YES"<<endl;

}
int main() {

  int n;
  cin>>n;
  while(n--)
    {

      solve();
      }
    return 0;
}
