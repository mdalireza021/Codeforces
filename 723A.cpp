#include<bits/stdc++.h>
using namespace std;

int main()

{
    vector<int> v;
    for(int i=0;i<3;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(),v.end());

    cout<<abs(v[0]-v[1])+abs(v[1]-v[2])<<endl;

    return 0;
}
