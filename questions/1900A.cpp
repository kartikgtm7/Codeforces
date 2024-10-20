
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, cnt = 0,ans=0;
        cin >> n;
        string s;
        cin>>s;
        for(long long i=0;i<n;i++){
            if(s[i]=='.'){
                cnt++;
                ans++;
            }
            else cnt=0;
            if(cnt>=3) break;
        }
        if(cnt>=3) cout<<2<<endl;
        else cout<<ans<<endl;


        
        
    }
}
