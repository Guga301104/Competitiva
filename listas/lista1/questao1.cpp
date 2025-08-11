#include <bits/stdc++.h>
using namespace std;
int main() {
    string x;
    bool valido = false;
    cin >> x;
    for (int i = 0 ; i < x.length() ; i++){
        if (x[i] == 'H' || x[i] == 'Q' || x[i] == '9'){
            valido = true;
        }
    }
    if (valido) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}