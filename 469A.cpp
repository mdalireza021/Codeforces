#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;
    int sum=0;
    vector<int> v;
    int x;
    cin>>x;
    for(int i=0;i<x*2;i++)
    {

        int val;
        cin>>val;
        v.push_back(val);

    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=v[i+1])
        {
            sum++;
        }
    }
    if(sum==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}
