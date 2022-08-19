#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
    {
      int val;
      cin>>val;
      v.push_back(val);
    }
  sort(v.begin(),v.end());
  int max=v[v.size()-1];
  int sum=0;

  for(int i=0;i<v.size();i++)
    {
      sum+=abs(max-v[i]);
    }


  cout<<sum<<endl;
 return 0;
}
