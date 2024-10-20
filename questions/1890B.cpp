#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
         long n, m; cin >> n >> m;
        string s, t; cin >> s >> t;

        bool res(true);
        for(long p = 0; res && p + 1 < s.size(); p++){if(s[p] == s[p + 1]){res = false;}}
        if(res){cout << "YES" << endl; continue;} 

        res = true; 
        for(long p = 1; res && p < t.size(); p++){if(t[p] == t[p - 1]){res = false;}}
        if(t.size() % 2 == 0){res = false;}

        for(long p = 0; res && p + 1 < s.size(); p++){
            if(s[p] != s[p + 1]){continue;}
            else if(s[p] != t[0]){continue;}
            else{res = false;}
        }

        cout << (res ? "YES" : "NO") << endl;
    }
}