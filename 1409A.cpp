#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {

        long long int a,b;
        cin>>a>>b;

        cout<<(abs(a-b)+9)/10<<endl;
    }
    return 0;
}
