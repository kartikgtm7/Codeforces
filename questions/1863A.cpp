#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,a,q;
    string s;
    cin>>n>>a>>q>>s;
    int x=0,y=0;
    for(char c : s)
    {
        if(c=='+') 
            x++;
        else
            y++;
        if (a+x-y>=n)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    if (a+x-y>=n || a>=n)
        cout<<"YES"<<endl;
    else if(a+x>=n)
        cout<<"MAYBE"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
         solve();
    }
   
}