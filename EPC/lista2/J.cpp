#include <bits/stdc++.h>
using namespace std;

int main(){
	ios:: sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vector<int> lista(n+1);
	for (int i = 1 ; i <= n ; ++i){
		int x; cin >> x;
		lista[x] = i;
	}
	for (int i = 1 ; i <= n ; ++i) cout << lista[i] << "\n";

	return 0;
}
