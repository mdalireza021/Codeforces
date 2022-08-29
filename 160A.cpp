#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int arr[100],sum1=0,sum2=0,count=0;
    cin>>n;
   for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

  sort(arr,arr+n);
  for(int i=0;i<n;i++)
    {
      sum1+=arr[i];
    }

  sum1=sum1/2;
  
  while(sum2<=sum1)

    {
      count++;
      sum2+=arr[n-count];
    }

  cout<<count<<endl;
  
    return 0;
}
