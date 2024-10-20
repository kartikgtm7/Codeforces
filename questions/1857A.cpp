#include<bits/stdc++.h>
using namespace std;
 void solve()
{
    long long n;
    cin >> n;

    long long sum = 0;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for (long long i = 0; i < n; i++)
    {
        long long curr = sum - arr[i];
        if ((arr[i] % 2 == 0 && curr % 2 == 0) || (arr[i] % 2 == 1 && curr % 2 == 1))
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";

}
 int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}