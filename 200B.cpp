#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=0.0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        sum+=k;
    }
    printf("%.4lf\n",(sum/n));

    return 0;
}
