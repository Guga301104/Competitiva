#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int num[n];
    for (int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        num[i] = a;
    }
    int menor = num[0], posicao = 0;
    for (int j = 1 ; j < n ; j++){
        if (num[j] < menor){
            menor = num[j];
            posicao = j;
        }
    }
    cout  << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;
    return 0;
}