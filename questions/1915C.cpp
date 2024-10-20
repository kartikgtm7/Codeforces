#include<bits/stdc++.h>
using namespace std;
bool is_square(long long num)
{
    long long x= sqrt(num);
    return x*x==num;
}
int main(){
    int t; cin>>t;
    while(t--){
         int n;
    cin>>n;
    long long sum=0;
    for(long long i=0; i<n; ++i)
    {
        long long x;
        cin>>x;
        sum +=x;
    }
    if(is_square(sum))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    }
