#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i; cin >> t;
    while (t--)
    {
        int x; 
        cin >> x;
        int a[3];
        for ( i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        // a[x-1]=x;
        if(a[x-1] != 0) 
        {
            int p = a[x-1];
            if(a[p-1] != 0)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;



    }



    return 0;
}