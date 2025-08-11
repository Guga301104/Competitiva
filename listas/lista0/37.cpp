#include <bits/stdc++.h>
using namespace std;
int main() {
    bool pass = true;
    int a, qtd, x;
    cin >> a >> qtd;
    vector<int> alturas(qtd);
    cin >> alturas[0];
    x = alturas[0];
    for (int i = 1 ; i < qtd ; i++){
        cin >> alturas[i];
        if (abs(alturas[i] - alturas[i-1]) > a) pass = false; break;
        x = alturas[i];
    }
    if (pass) cout << "YOU WIN" << endl;
    else cout << "GAME OVER" << endl;
    return 0;
}