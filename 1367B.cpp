#include <bits/stdc++.h>
using namespace std;


int main() {

  int n;
  cin>>n;
  while(n--)
    {
      int val;
      cin>>val;
      int even=0,odd=0,temp=0;
      vector<int> v;
      for(int i=0;i<val;i++)
        {
          int x;
          cin>>x;
          v.push_back(x);
          
        }

      for(int i=0;i<v.size();i++)
        {
          if(i%2==0)
          {
            if(v[i]%2==0)
            {
              temp++;
            }
            else
              even++;
            
          }
          else
          {
            if(v[i]%2!=0)
            {
              temp++;
            }
            else
              odd++;
              
          }
            
        }

      if(v.size()==temp)
      {
        cout<<0<<endl;
        
      }
      else if(even==odd)
      {
        cout<<odd<<endl;
      }
      else
        cout<<-1<<endl;
      
      
    }
  
    return 0;
}
