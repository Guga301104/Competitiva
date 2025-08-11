#include <bits/stdc++.h>
using namespace std;
int main() {
    float x, soma;
    vector<float> res(5);
    for (int i = 0 ; i < 5 ; ++i){
        cin >> x;
        res[i] = x;
    }
    sort(res.begin(), res.end());
    soma = res[1] + res[2] + res[3];
    cout << fixed << setprecision(1);
    cout << soma << endl;
    return 0;
}