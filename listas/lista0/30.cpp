#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, cont;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cont = 0;
        cin >> x;
        for (int j = 2 ; j <= x ; j++){
            if (x%j == 0) cont += 1;
        }
        if (cont > 1) cout << x << " nao eh primo" << endl;
        else cout << x << " eh primo" << endl;
    }
    return 0;
}