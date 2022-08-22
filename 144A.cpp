#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;

  int max_in=0,min_in=0,max_value=0,min_value=INT_MAX;
  for(int i=1;i<=n;i++)
    {
      int temp;
      cin>>temp;
      if(temp>max_value)
      {
        max_in=i;
        max_value=temp;
        
      }

      if(temp<=min_value)
      {
        min_in=i;
        min_value=temp;
      }
    }

  if(max_in>min_in)
  {
    cout<<max_in+(n-min_in-1)-1<<endl;
  }
    
  else
  {
    cout<<max_in+(n-min_in-1)<<endl;
  }
  
    return 0;
}
