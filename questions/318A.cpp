#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,ans;
    cin>>n>>k;
    long long div =(n+1)/2;
    if(k<=div){
        ans = (k*2)-1;
       
    }
    else{
        ans = (k-div)*2;
       
    }
     cout<<ans<<endl;
     return 0;
}