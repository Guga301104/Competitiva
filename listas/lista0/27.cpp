#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    int a;
    float media, n = 0, soma = 0;
    while (true){
        cin >> a;
        if (a < 0) break;
        soma += a;
        n += 1;
    }
    media = soma/n;
    cout << media << endl;
    return 0;
}