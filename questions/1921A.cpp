#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long x1, x2, x3, x4, y1, y2, y3, y4;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    long long area = 1;

    if (x1 == x2)
    {
        area = area * abs(y2 - y1);
    }
    else if (x1 == x3)
    {
        area = area * abs(y3 - y1);
    }
    else if (x1 == x4)
    {
        area = area * abs(y4 - y1);
    }
    else if (x2 == x3)
    {
        area *= abs(y3 - y2);
    }
    else if (x2 == x4)
    {
        area *= abs(y4 - y2);
    }
    else if (x3 == x4)
    {
        area *= abs(y4 - y3);
    }

    if (y1 == y2)
    {
        area = area * abs(x2 - x1);
    }
    else if (y1 == y3)
    {
        area = area * abs(x3 - x1);
    }
    else if (y1 == y4)
    {
        area = area * abs(x4 - x1);
    }
    else if (y2 == y3)
    {
        area *= abs(x3 - x2);
    }
    else if (y2 == y4)
    {
        area *= abs(x4 - x2);
    }
    else if (y3 == y4)
    {
        area *= abs(x4 - x3);
    }

    cout << area << endl;

} 
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}