#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
    int n, q; cin >> n >> q;
    map<int,int> mapa;
    vector<int> lista(n+1);
    for (int i = 1 ; i <= n ; i++){
        cin >> lista[i];
        mapa[lista[i]] = i;
    }

    int L = mapa[1], R = mapa[1];
    int tam = 1;
    set<pi> res;
    res.insert({L,R});

    for (int i = 2 ; i <= n ; i++){
        int p = mapa[i];
        L = min(L, p);
        R = max(R, p);
        tam = i;
        if (R-L+1 == tam){
            res.insert({L,R});
        }
    }

    while(q--){
        int l, r; cin >> l >> r;
        if (res.count({l,r})){
            cout << "TAK\n";
        } else {
            cout << "NIE\n";
        }
    }

   return 0;
}