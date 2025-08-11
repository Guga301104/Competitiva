#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, soma = 0;
    vector<int> cabos;
    cin >> n;
    for (int i = 0 ; i < n ; i ++){
        cin >> a;
        cabos.push_back(a);
    }
    while(cabos.size()>1){
        sort(cabos.begin(), cabos.end());
        soma += cabos[1];
        cabos[1] = cabos[0] + cabos[1];
        cabos.erase(cabos.begin());
    }
    cout << soma << endl;
    return 0;
}