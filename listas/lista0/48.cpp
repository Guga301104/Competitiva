#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n){
        vector<string> lista (n);
        for (int i = 0 ; i < n ; ++i){
            string x;
            cin >> x;
            lista[i] = x;
        }
        sort(lista.begin(), lista.end());
        for (int j = 0 ; j < n ; ++j) cout << lista[j] << endl;
    }
    return 0;
}