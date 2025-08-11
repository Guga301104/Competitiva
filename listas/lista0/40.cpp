#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, soma, caso = 1;
    while (cin >> n){
        if (n == 0){
            cout << "Caso 1: 1 numero" << endl << n << endl;
            cout << endl;
            continue;
        }
        vector<int> num(n+1);
        soma = 1;
        cout << "Caso " << caso << ": ";
        for (int i = 0 ; i <= n ; i++){
            num[i] = i;
            soma += i;
        }
        cout << soma << " numeros" << endl;
        cout << "0 ";
        for (int j = 1 ; j <= n ; j++){
            for (int k = 0 ; k < j ; k++){
                cout << num[j] << " ";
            }
        }
        cout << endl << endl;
        caso ++;
    }
    return 0;
}