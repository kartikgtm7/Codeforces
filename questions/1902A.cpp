#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        string s, res="NO";
        cin>>n;
        cin>>s;
        for(long long i=0;i<n;i++){
            if(s[i]=='0'){
                res ="YES";
                break;
            }
        }
        cout<<res<<endl;
    }
}