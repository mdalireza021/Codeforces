#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,l;
    cin>>n>>l;

  vector<int> v;
  for(int i=0;i<n;i++)
    {
      int temp;
      cin>>temp;
      v.push_back(temp);
    }
  sort(v.begin(),v.end());

  int r=max(v[0],l-v[n-1])*2;

  for(int i=0;i<n-1;i++)
    {
      r=max(r,v[i+1]-v[i]);
    }
  cout<<fixed<<setprecision(10)<<double(r/2.0)<<endl;
    return 0;
}
