#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v= {0};



    for(int i=1; i<=1666; i++)
    {

        if(i%3!=0 && i%10!=3)
        {
            v.push_back(i);
        }
    }


    int n;
    cin>>n;
    while(n--)
    {
        int i;
        cin>>i;
        cout<<v[i]<<endl;
    }





    return 0;
}
