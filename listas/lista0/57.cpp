#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, c = 0, soma = 0, index;
    cin >> n;
    vector<int> sec(n);
    for (int i = 0 ; i < n ; ++i){
        cin >> x;
        c += x;
        sec[i] = x;
    }
    for (int j = 0 ; j < n ; ++j){
        soma += sec[j];
        if (soma == c/2) index = j+1;
    }
    cout << index << endl;
    return 0;
}