#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long two,three, five,six;
	cin>>two>>three >> five >>six ;
	long long s1,s2;
	s1 = min({two,five,six});
	two-=s1;
	five-=s1;
	six-=s1;
	s2= min(three,two);
	long long ans= 256 *s1 + 32 * s2 ;
	cout << ans << endl;
    return 0;
}