#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; ++i){
        string a1, a2;
        cin >> a1 >> a2;
        cout << "Caso #" << i+1 << ": ";
        if (a1 == "tesoura" && (a2 == "papel" || a2 == "lagarto")) cout << "Bazinga!" << endl;
    }
    return 0;
}
