#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int b,p,f,h,c;
        cin >>b >>p >>f;
        cin >> h >> c;
        int maxHamburgers = min(b/2,p);
        int maxChickenburgers =min(b/2,f);
        if(p>f){
        if(f<b/2){
            int profit = ((b/2)-f)*h + maxChickenburgers*c;
            cout <<profit<<endl;}
        else{
        
        int profit = maxHamburgers*h + maxChickenburgers*c;
        cout << profit<<endl;}
        }
        else if(p==f){
            if((b/2) > p){
            int profit = 2*(min(b/2,p))*h;
            cout<<profit<<endl;}
            else{
                cout<< b/2*h<<endl;;
            }
        }
        else if((b/2) < p  || (b/2) < f){
            int profit = (b/2)*max(h,c);
            cout<<profit<<endl;
        }
        else{
        
        int profit = maxHamburgers*h + maxChickenburgers*c;
        cout << profit<<endl;}
     } 

 }
