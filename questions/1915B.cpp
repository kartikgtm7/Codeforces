#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        
    vector<int>freq(3,0);
    for(int i=0; i<3; ++i)
    {
        string s;
        cin>>s;
        for(int j=0; j<3; ++j)
        {
            if(s[j]=='?')
                continue;
            else
                freq[s[j]-'A']++;
        }
    }
    for(int i=0; i<3; ++i)
    {
        if(freq[i]<3)
        {
            cout<<char(i+'A')<<endl;
            
        }
    }
    }
}