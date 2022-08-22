#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,k;
    cin>>n>>k;

    int sum=0,count=0;
    int res=240-k;
    for(int i=1;i<=n;i++)
    {
        sum+=5*i;
        if(sum>res)
        {
            break;
        }
        count++;
    }

    cout<<count<<endl;

    return 0;
}
