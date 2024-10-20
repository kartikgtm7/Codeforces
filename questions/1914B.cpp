#include<bits/stdc++.h>

#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#define dbgin(x) cerr << #x <<" "; _print(x); cerr << ";"<<endl;

#define dbg(x)
#define dbgin(x)
using namespace std;
void solve()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(long long i=sizeof(v)-1; i>=0; --i)
    {
        v[n-i-1]=i+1;
    }
    dbg(v);
    sort(v.begin(),v.begin()+k+1);
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}
 int main(){
    int t; cin>>t;
    while(t--){solve();}
 }