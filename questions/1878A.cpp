#include<bits/stdc++.h>
using namespace std;
void solve(){
    
        {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < (int)(n); ++i){
        cin>>v[i];}
    for(int i=0; i<n; ++i)
    {
        if(v[i]==k)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}}
int main(){
    int t; cin>>t;
    while(t--){
    solve();}
}