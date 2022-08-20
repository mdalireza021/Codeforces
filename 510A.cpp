#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=1;i<=a;i++)
    {
        if(i%4==2)
        {

            for(int j=1;j<b;j++)
            {
                cout<<".";
            }

            cout<<"#";

        }
        else if(i%4==0)
        {
            cout<<"#";

            for(int j=1;j<b;j++)
            {
                cout<<".";
            }

        }
        else
        {

            for(int j=1;j<=b;j++)
            {
                cout<<"#";
            }
        }
        cout<<endl;

    }
    return 0;
}
