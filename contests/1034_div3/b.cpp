#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--){
    int n, j, k; cin >> n >> j >> k;
    vector<int> lista (n);
    int maior = -1;
    for (int i = 0 ; i < n ; i++){
        cin >> lista[i];
        if (lista[i] > maior) maior = lista[i];
    }
    if ((lista[j-1] == maior && k == 1) || k != 1) cout << "YES\n";
    else cout << "NO\n";
   }
   return 0;
}