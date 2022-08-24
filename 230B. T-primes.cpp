/***
            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!
            Author : Md. Ali Reza
            Department of CSE, Daffodil International University, Dhaka.
***/


#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool> prime(N,true);
void sieve()
{
  prime[0]=prime[1]=false;
  int n=prime.size();
  for(int i=2;i<N;i++)
    {
      if(prime[i]==true)
      {
        for(int j=i*2;j<N;j+=i)
          {
            prime[j]=false;
          }
      }
    }  
}
int main() {

  sieve();

  int t;
  cin>>t;
  while(t--)
    {
      long long int n,r;

      cin>>n;
      r=sqrt(n);
      
      if(r*r==n && prime[r]==true)
      {
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }
      
    }
    return 0;
}
