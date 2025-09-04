#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int c = 0;
	vector<int> lista(6);
	for (int i = 0 ; i < 6 ; ++i) cin >> lista[i];
	vector<int> sorte(6);
	for (int i = 0 ; i < 6 ; ++i) cin >> sorte[i];
	for (int j = 0 ; j < 6 ; ++j){
		if (count(sorte.begin(), sorte.end(), lista[j]) > 0) c++;
	}
	if (c < 3) cout << "azar\n";
	else if (c == 3) cout << "terno\n";
	else if (c == 4) cout << "quadra\n";
	else if (c == 5) cout << "quina\n";
	else cout << "sena\n";

	return 0;
}
