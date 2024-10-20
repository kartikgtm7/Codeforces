#include<bits/stdc++.h>
using namespace std;

    int main()
{
	

	int i, j, k;
	int n, m;
	int a, b;

	cin >> a >> b;

	if (a > b)
		swap(a, b);

	m = b - a;
	if (m % 2 == 0)
	{
		m = m / 2;
		cout << (m*(m + 1)) << endl;
	}

	else
	{
		m = a + b;
		k = m / 2;
		
		j = k - a;
		k = b - k;

		cout << ((j*(j + 1))/2 + (k*(k + 1))/2) << endl;
	}
	
	return 0;
}