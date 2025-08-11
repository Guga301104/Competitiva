#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n;
   cin >> n;
   ll del = 0;
   ll ini = 0;
   vector<pair<ll, ll>> lista;
   for (int i = 0 ; i < n ; i++){
    ll a, b; 
    cin >> a;
    if (a == 1) {
        cin >> b;
        if (!lista.empty()){
            lista.push_back(make_pair(lista.back().first + lista.back().second, b));
        } else {
            lista.push_back(make_pair(0,b));
        }
    } else if (a == 2) {
        if (!lista.empty()){
            del += lista[ini].second;
            ini ++;
        }
    } else if (a == 3) {
        cin >> b;
        cout << lista[ini + b-1].first - del << "\n";
    }
   }
   return 0;
}