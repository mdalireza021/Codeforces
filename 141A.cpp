#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str1;
  cin>>str1;
  string str2;
  cin>>str2;
  string temp;
  cin>>temp;
  

  string str3=str1+str2;
  sort(str3.begin(),str3.end());
  sort(temp.begin(),temp.end());
  if(str3==temp)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  
}
