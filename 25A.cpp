#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
  cin>>n;
  int count=0;
  int lasteven,lastodd;
  for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      
      if(x%2==0)
      {
        count++;
        lasteven=i+1;
      }
      else
      {
        count--;
        lastodd=i+1;
      }
    }

  if(count>0)
  {
    cout<<lastodd<<endl;
  }
  else
  {
    cout<< lasteven<<endl;
  }
    return 0;
}
