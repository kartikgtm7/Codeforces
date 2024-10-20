#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long long n;
    cin >> n;

    vector<pair<long long, long long>> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    bool canWin = true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i].first >= arr[0].first and arr[i].second >= arr[0].second)
        {
            canWin = false;
        }
    }

    if (!canWin)
    {
        cout << -1 << endl;
    }
    else
        cout << arr[0].first << endl;
}
    
}