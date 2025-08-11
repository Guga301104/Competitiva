#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
const ll MOD = 1e9;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n, k; cin >> n >> k;
   vector<ll> A(n > k ? n+1 : k+1, 0);
   vector<ll> prefix(n > k ? n+2 : k+2, 0);
   for (ll i = 0 ; i < k ; i++){
    A[i] = 1;
    prefix[i+1] = (prefix[i] + A[i]);
   }
   if (n >= k){
    for (ll i = k ; i <= n ; i++){
     A[i] = (prefix[i] - prefix[i-k] + MOD) % MOD;
     prefix[i+1] = (prefix[i] + A[i]) % MOD;
    }
   }
   cout << A[n] << "\n";
   return 0;
}