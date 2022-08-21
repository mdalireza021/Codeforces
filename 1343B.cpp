#include <bits/stdc++.h>
using namespace std;


int main() {

      int t;
      cin>>t;
    
  while(t--)
    {
      int value;
      cin>>value;
        int even=0,odd=0;
      
      if(value%4==0)
      {
        cout<<"YES"<<endl;
        for(int i=2;i<=value;i+=2)
          {
            even+=i;
            cout<<i<<" ";
          }

        for(int i=1;i<=value-2;i+=2)
          {
            odd+=i;
            cout<<i<<" ";
          }

        cout<<even-odd<<endl;
        
      }
      else
      {
        cout<<"NO"<<endl;
      }
    }
    return 0;
}
