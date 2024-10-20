#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    long long T = 1;
    cin >> T;
    while (T--) 
    {
        
    long long n, k;
    cin >> n >> k;

    long long ans = n;

    for (int i = 1; i <= n; i++)   
    {
        long long low = (i + k - 2) / k;
        long long high = (n - i + k - 1) / k;

        ans = min(ans, low + high);
    }

    cout << ans + 1 << endl;
    }

}