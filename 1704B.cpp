#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
  cin>>t;
  while(t--)
    {

      int n,x,res=0;
      cin>>n>>x;
      vector<int> v(n);
      for(int i=0;i<n;i++)
        {
          cin>>v[i];
          
        }

      int min_value=v[0];
      int max_value=v[0];

      for(int i=0;i<n;i++)
        {

          if(v[i]> max_value)
          {
            max_value=v[i];
          }
          if(v[i]<min_value)
          {
            min_value=v[i];
          }

          if(max_value-min_value>2*x)
          {
            res++;
            max_value=v[i];
            min_value=v[i];
          }

         
        }

       cout<<res<<endl;

      
    }
    return 0;
}
