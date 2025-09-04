#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int x, y = 0;
	for (int i = 0 ; i < n ; ++i){
		cin >> x;
		if (x > y + 8) {
			cout << "N\n";
			return 0;
		}
		else y = x;
	}
	cout << "S\n";
	return 0;
}
