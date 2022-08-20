#include <bits/stdc++.h>
using namespace std;

int main() {
    string ch;
    getline(cin,ch);

  set<char>s;

  for(int i=0;i<ch.size();i++)
    {
      if(ch[i]>='a' && ch[i]<='z')
      {
        s.insert(ch[i]);
      }
    }

  cout<<s.size()<<endl;
    return 0;
}
