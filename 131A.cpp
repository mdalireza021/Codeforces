#include<bits/stdc++.h>
using namespace std;

bool check_upper(string str)
{
  int count=0;
  for(int i=0;i<str.size();i++)
    {
      if(str[i]>='A' && str[i]<='Z')
      {
        count++;
      }
    }

  if(count==str.size())
  {
    return true;
  }
  else
    return false;
}


int main()
{
    string str;
    cin>>str;
    int count=0;


  if(check_upper(str))
  {
    for(int i=0;i<str.size();i++)
      {
        str[i]=tolower(str[i]);
      }

    cout<<str<<endl;
    return 0;
  }

  for(int i=1;i<str.size();i++)
    {
      if(islower(str[i]))
      {
        count++;
      }
    }

  if(islower(str[0]) && count==0)
  {
    str[0]=toupper(str[0]);
    for(int i=1;i<str.size();i++)
      {
        str[i]=tolower(str[i]);
      }

    cout<<str<<endl;
  }

  else
  {
    cout<<str<<endl;
  }

  
   
    return 0;
}
