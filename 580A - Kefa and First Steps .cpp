#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin>>n;

  for(int i=0;i<n;i++)
    {
      int val;
      cin>>val;
      v.push_back(val);
    }

  int len=1,temp=1,y=v[0];

  for(int i=1;i<n;i++)
    {
      int x=v[i];
      if(x>=y)
      {
        temp++;
      }
      else
      {
        temp=1;
      }
      y=x;
      len=max(len,temp);
    }

  cout<<len<<endl;
    return 0;
}
