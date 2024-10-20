#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int evenFlag=0;
        int oddFlag=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i] %2)
                {
                    oddFlag=1;

                }
                else{
                    evenFlag=1;
                }

            }
        }
        if(oddFlag &&evenFlag){
            cout<<"No"<<endl;
            continue;
        }
        evenFlag=0;
        oddFlag = 0;
        for(int i=1; i<n;i++){
            if(i%2){
                if(a[i] %2){
                    oddFlag=1;
                }
                else{
                    evenFlag=1;
                }

            }
        }
        if(oddFlag && evenFlag){
            cout<<"No"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}