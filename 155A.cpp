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
  int max=v[0];
  int min=v[0];
  int count=0;

  for(int i=0;i<n;i++)
    {
      if(v[i]>max)
  {
    max=v[i];count++;
  }
  if(v[i]<min)
  {
    min=v[i];count++;
  }
    }

  cout<<count<<endl;
  return 0;
  }
