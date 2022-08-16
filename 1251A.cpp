#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  while(n--)
    {
      string str;
      cin>>str;
      set<char> s;
      for(int i=0;i<str.size();i++)
        {
          if(str[i]==str[i+1])
            i++;  
          else
            s.insert(str[i]);
        }
      for(auto it:s)
        {
          cout<<it;
          }
      cout<<endl;
    }

    return 0;
}
