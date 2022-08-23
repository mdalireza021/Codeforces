#include <bits/stdc++.h>
using namespace std;

int main() {

  int n,m;
  cin>>n>>m;

  int i=1,count=0;
  while(true)
    {
      if(m-i==0 || n-i==0)
        break;
      i++;
      count++;
    }
  if(count%2==0)
  {
    cout<< "Akshat"<<endl;
    
  }
  else
  {
    cout<<"Malvika"<<endl;
  }
    return 0;
}
