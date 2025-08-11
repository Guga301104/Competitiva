#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i =0;i<n;++i){
        string nome1, nome2, esc1, esc2;
        long long int x1, x2;
        cin >> nome1 >> esc1 >> nome2 >> esc2;
        cin >> x1 >> x2;
        if (((x1 + x2)%2 == 0 && esc1 == "PAR") || ((x1 + x2)%2 != 0 && esc1 == "IMPAR")) cout << nome1 << endl;
        else cout << nome2 << endl;
    }
    return 0;
}