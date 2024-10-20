#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a,b,evenA=0,evenB=0,oddA=0,oddB=0,ans=0;
    cin>>n>>m;
    for(long long i=0;i<n;i++){
        cin>>a;
        if(a%2==0)evenA++;
        else oddA++;
    }
    for(long long j=0;j<m;j++) {
        cin >> b;
        if (b % 2 == 0) evenB++;
        else oddB++;
    }
    if(oddA >0 || oddB >0){
        if(oddB >0){
            ans=min(oddB,evenA);
        }
        if(oddA > 0){
            ans = ans+ min(oddA,evenB);
        }

    }
    cout<<ans<<endl;
}