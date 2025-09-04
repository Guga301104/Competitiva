#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int maior = -1, m = 0, p = 0;
	vector<int> lista(5);
	for (int i = 0 ; i < 5 ; ++i){
		cin >> lista[i];
		if (lista[i] > maior) maior = lista[i];
	}
	for (int i = 0 ; i < 5 ; ++i){
		if (lista[i] == maior){
			m ++;
			lista[i] = -1;
		}
	}
	int max = *max_element(lista.begin(), lista.end());
	for (int i = 0 ; i < 5 ; ++i){
		if (lista[i] != -1 && lista[i] == max) p ++;
	}
	cout << m << " " << p << "\n";
	
	return 0;
}	
