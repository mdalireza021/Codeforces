#include <bits/stdc++.h>
using namespace std;
bool isprime( int k)
 {

     for ( int i=2; i<k; i=i+1)
     {
         if( k%i==0)
         {
             return true;

         }
     }
     return false;
 }
int main() {

  int n;
  cin>>n;
  if(n%2==0)
  {
    cout<<"4 "<<n-4<<endl;
  }
  else
  {
    cout<<"9 "<<n-9<<endl;
  }
  
    return 0;
}
