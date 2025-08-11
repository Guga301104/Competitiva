#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n, k; cin >> n >> k;
   vector<ll> lista(2*n);
   for (ll i = 0 ; i < n ; i++){
    cin >> lista[i];
    lista[i+n] = lista[i];
   }
   ll c = 1;
   ll j = 0;
   vector<ll> res;
   for (ll i = 1 ; i < 2*n && res.size() < n ; i++){
    if (lista[i] >= lista[j] + (i-j)*k) {
        c ++;
    } else {
        while (c-- && res.size() < n){
            res.push_back((i%n)+1);
        }
        c = 1;
        j = i;
    }
   }
   while (c-- && res.size() < n){
    res.push_back((j%n)+1);
   }
   for (int i = 0 ; i < n ; i++){
    cout << res[i] << (i+1 < n ? ' ' : '\n');
   }
   return 0;
}

