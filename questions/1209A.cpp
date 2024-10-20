#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, one = 0;

    cin >> n;

    const int maxSize = 1000;
    int arr[maxSize];

    for (int i = 0; i < n; i++) {
        cin >> a;
        arr[i] = a;
        one += (a == 1);
    }

    sort(arr, arr + n);

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n;) {
            if (arr[j] % arr[i] == 0) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    if (one > 0) {
        cout << 1 << endl;
    } else {
        cout << n << endl;
    }

    return 0;
}
