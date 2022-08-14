#include <bits/stdc++.h>
using namespace std;


int main() {

  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
    {
      int value;
      cin>>value;
      v.push_back(value);
    }


  int low=0;
  int high=v.size()-1;

  int count=0;
  int sereja_sum=0, dima_sum=0;
  
  
  while(low<=high)
    {

      if(count%2==0)
      {
        if(v[low]<v[high])
        {
          sereja_sum+=v[high];
          high--;
        }
        else
        {
          sereja_sum+=v[low];
          low++;
        }
        
      }

      else

      {

        if(v[low]<v[high])
        {
          dima_sum+=v[high];
          high--;
        }

        else
        {
          dima_sum+=v[low];
          low++;
        }
        
      }

      count++;
    }


  cout<<sereja_sum<<" "<<dima_sum<<endl;
    return 0;
}
