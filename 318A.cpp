    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        long long int n,k,median;
        cin>>n>>k;
       
     
      if(n%2==0)
      {
        median=n/2;
        
      }
      else
      {
        median=(n/2)+1;
      }
     
      if(k<=median)
      {
        cout<<(2*k)-1<<endl;
      }
     
      else
      {
        cout<<(k-median)*2<<endl;
      }
        return 0;
    }
