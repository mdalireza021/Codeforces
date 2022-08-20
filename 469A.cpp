#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;
   long int sum=0;
    vector<int> v;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {

        int val;
        cin>>val;
        v.push_back(val);

    }
    int y;
    cin>>y;
    for(int i=0;i<y;i++)
    {
        int val2;
        cin>>val2;
        v.push_back(val2);
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
