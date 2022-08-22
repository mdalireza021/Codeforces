#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long int n,m;
    cin>>n>>m;
    long long int pos=1,sum=0;

    for(int i=0;i<m;i++)
    {

        int a;
        cin>>a;

        if(a>=pos)
        {
            sum+=(a-pos);
        }
        else
        {
            sum+=n-(pos-a);

        }
        pos=a;
    }

    cout<<sum<<endl;


    return 0;
}
