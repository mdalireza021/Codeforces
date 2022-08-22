#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    int police=0,crime=0;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n==-1)
        {
            if(police>0)
            {
                police--;
            }
            else
            {
                crime++;

            }
        }
        else
        {
            police+=n;
        }
    }

    cout<<crime<<endl;

    return 0;
}
