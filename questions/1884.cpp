#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
         long x, k;
        cin >> x >> k;

        long res = x;
        while (true) {
            long digitSum = 0, temp = x;
            while (temp > 0) {
                digitSum += temp % 10;
                temp /= 10;
            }

            if (digitSum % k == 0) {
                break;
            }

            ++x;
        }

        cout << x << std::endl;
    }

    return 0;
    

}