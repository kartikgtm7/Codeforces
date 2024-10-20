


#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int *ar = new int[n];

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        ar[i] = abs(num);
    }

    sort(ar, ar + n);

    cout << ar[0] << endl;

    delete[] ar;

    return 0;
}