#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m,val,temp;
    cin>>n>>m;
    vector<int> v;

  for(int i=0;i<m;i++)
    {
      int value;
      cin>>value;
      v.push_back(value);
    }
  sort(v.begin(),v.end());
  temp=v[m-1]-v[0];
  
  for(int i=n;i<=m;i++)
    {
      val=abs(v[i-1]-v[i-n]);
      temp=min(temp,val);
      
    }
  
  cout<<temp<<endl;
    return 0;
}
