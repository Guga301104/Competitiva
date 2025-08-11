#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n, q;
   cin >> n >> q;
   vector<ll> num(n);
   for (int i = 0 ; i < n ; ++i){
    cin >> num[i];
   }
   for (int j = 0 ; j < q ; ++j){
    ll k; cin >> k;
    ll e = 0, d = n, m;
    while (e < d){
        m = e + ((d-e)/2);
        if (num[m] - (m+1) < k){
            e = m+1;
        } else {
            d = m;
        }
    }
    cout << k + e << "\n";
   }
   return 0;
}