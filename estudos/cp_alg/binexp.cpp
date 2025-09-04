#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll binexp (ll a, ll b){
	ll res = 1;
	while (b > 0){
		if (b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cout << binexp(2, 3) << "\n";

	return 0;
}
