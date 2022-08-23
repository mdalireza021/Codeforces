#include <iostream>
using namespace std;
int main()
{
  int k,r,count=0;
  cin>>k>>r;
  while(true)
    {
      count++;
      int sum=k*count;
      if(sum%10==0 || sum%10==r)
      {
        break;
      }
    }
  cout <<count<<endl;
return 0;
  }
