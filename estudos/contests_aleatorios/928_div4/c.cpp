#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

ll somaDigitos (int x){
    ll soma = 0;
    while (x > 0){
        soma += x%10;
        x /= 10;
    }
    return soma;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   vector<ll> dp (200001);
   dp[0] = 0;
   for (int i = 1 ; i < 200001 ; i++){
    dp[i] = somaDigitos(i) + dp[i-1];
   }
   while (t--){
    ll n; cin >> n;
    cout << dp[n] << "\n";
   }
   return 0;
}