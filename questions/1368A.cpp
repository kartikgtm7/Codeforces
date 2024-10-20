#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, count = 0;
        cin >> a >> b >> n;

        int sum = 0;

        while (n > 0)
        {

            if (a > b)
            {
                b += a;
                sum = b;
                count++;
            }
            else
            {
                a += b;
                sum = a;
                count++;
            }
            if (sum > n)
            {
                break;
            }
        }
        cout << count << endl;
    }
}