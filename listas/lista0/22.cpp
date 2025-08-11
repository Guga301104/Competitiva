#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    while (true){
        cin >> a >> b;
        if (a == b) break;
        else if (b > a) cout << "Crescente" << endl;
        else cout << "Decrescente" << endl;
    }
    return 0;
}