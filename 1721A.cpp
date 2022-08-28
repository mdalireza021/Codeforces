#include <bits/stdc++.h>
using namespace std;
string removeStars(string s) {
        string res;
        for (char c : s)
            if (c == '*')
                res.pop_back();
            else
                res += c;
        return res;
    }

int main() {

  int t;
  cin>>t;
  while(t--)
    {

  string s1,s2;
  cin>>s1>>s2;

  set<char> s;
  for(char c:s1)
    {
      s.insert(c);
    }
  for(char c:s2)
    {
      s.insert(c);
    }
  if(s.size()==1)
  {
    cout<<"0"<<endl;
  }
  if(s.size()==2)
  {
    cout<<"1"<<endl;
  }
  if(s.size()==3)
  {
    cout<<"2"<<endl;
  }
  if(s.size()==4)
  {
    cout<<"3"<<endl;
  }

      }
    return 0;
}
