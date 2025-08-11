#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << fixed << setprecision(1);
    double tab[12][12], soma = 0.0;
    int linha;
    char op;
    cin >> linha;
    cin >> op;
    for (int i = 0 ; i < 12 ; i++){
        for (int j = 0 ; j < 12 ; j++){
            int x;
            cin >> x;
            tab[i][j] = x;
        }
    }
    for (int k = 0 ; k < 12 ; k++){
        soma += tab[linha][k];
    }
    if (op == 'S') cout << soma << endl;
    else if (op == 'M') cout << (soma/12) << endl;
    return 0;
}