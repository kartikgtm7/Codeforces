#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]!=1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}