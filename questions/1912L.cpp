#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long n;
    string s;
    cin>>n>>s;
    long ctL=0, ctO=0, netL=0, netO=0;
    for(auto c:s)
    {
        if(c=='L')
            netL++;
        else
            netO++;
    }
    for(long i=0; i<n-1; ++i)
    {
        if(s[i]=='L')
            ctL++;
        else
            ctO++;
        if(ctL!=netL-ctL && ctO!=netO-ctO)
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main(){
    solve();}
    