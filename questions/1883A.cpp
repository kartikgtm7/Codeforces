#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int prev=1;
        int cnt=0;
        for (long i=0;i<s.size();i++){
            int cur=s[i]-'0';
            if(cur==0){cur=10;}
            int dis = cur-prev;
            if (dis<0)
            dis=-dis;
            cnt+=dis+1;
            prev=cur;
        }
        cout<<cnt<<endl;
    }
}