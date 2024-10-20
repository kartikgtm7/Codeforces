#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s;
        long long n,cnt=0;
        cin>>n>>s;
        vector<long long>arr(27);
        for(long long i=0;i<n;i++){
            arr[s[i]-'A']++;
            if(arr[s[i]-'A']==(s[i]-'A'+1)) cnt++;
        }
        cout<<cnt<<endl;

    }
}