#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long n,k;
        cin>>n>>k;
        long a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        long best=-2;
        for(int i=0;i<n;i++){
            if(i+a[i]<=k && (best==-2 || b[best]<b[i])){
                best=i;
            }
        }
        cout<<best+1<<endl;
    }
}