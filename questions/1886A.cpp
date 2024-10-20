#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag=0;
        if(n<7 || n==9) cout<<"NO"<<endl;
        else { flag =1;cout<<"YES"<<endl;}
        if(flag==1){
            if(n%3==0){
                cout<<1<<" "<<4<<" "<<(n-5)<<endl;;
            }
            else{
                 cout<<1<<" "<<2<<" "<<(n-3)<<endl;}

    }
}
}