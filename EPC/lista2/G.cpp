#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, c = 0;
	cin >> n;
	vector<int> lista(n);
	for (int i = 0 ; i < n ; ++i) cin >> lista[i];
	for (int j = 1 ; j < n-1 ; ++j){
		if (lista[j] < lista[j-1] && lista[j] < lista[j+1]) {
			cout << "S\n";
			return 0;
		}
	}
	cout << "N\n";

	return 0;
}
