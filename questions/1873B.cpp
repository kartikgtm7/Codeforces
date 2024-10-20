#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long n; cin>>n;
        long a[n];
        for(long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long prod=1;
        a[0]+=1;
        for(long i=0;i<n;i++){
            prod*=a[i];
        }
        cout<<prod<<endl;

    }
}