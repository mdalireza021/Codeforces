    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int m,n;
        cin>>m>>n;
        string s;
        cin>>s;
        vector<int> v={0};
        vector<int> pre_s={0};
        
        for(int i=0;i<s.size();i++)
        {
            v.push_back(s[i]-'a'+1);
        }
        pre_s.push_back(v[1]);
        
        
        for(int i=2;i<v.size();i++)
        {
            pre_s.push_back(pre_s[i-1]+v[i]);
        }
        
        while(n--)
        {
            int x,y;
            cin>> x>> y;
            cout<<pre_s[y]-pre_s[x-1]<<endl;
            
        }
        return 0;
    }
