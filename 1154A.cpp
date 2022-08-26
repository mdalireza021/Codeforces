#include<bits/stdc++.h>

using namespace std;

int main()
{

  vector<int> v;
  
  for(int i=0;i<4;i++)
    {
      int temp;
      cin>>temp;
      v.push_back(temp);
      
    }
  sort(v.begin(),v.end());
  
cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2]<<endl;
 
    return 0;
  }
