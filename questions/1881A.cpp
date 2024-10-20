#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n,m;
    string x,s;
    cin>>n>>m>>x>>s;
    int ct=0;
    for(int i=0; i<=10; ++i)
    {
        if(x.find(s) != string::npos)
        {
            cout<<i<<endl;
            return;
            
        }
        x=x+x;
    }
    cout<<-1<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
         solve();
    }
}