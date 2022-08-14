#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  
  while(n--)
    {
      int val;
      cin>>val;

      vector<int> v;
      for(int i=0;i<val;i++)
        {
          int x;
          cin>>x;
          v.push_back(x);
        }
      int low=0;
      int high=v.size()-1;
      vector<int> new_v;
      while(low<high)
        {

          new_v.push_back(v[low]);
          new_v.push_back(v[high]);
          low++;
          high--;

          
        }
      if(val%2==1)
      {
        new_v.push_back(v[low]);
        
      }


      for(int i=0;i<new_v.size();i++)
        {
          cout<<new_v[i]<<" ";
        }
      cout<<endl;
      
    }
    return 0;
}
