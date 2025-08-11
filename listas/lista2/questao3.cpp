#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n;
   cin >> n;
   vector<ll> A (n+1);
   vector<ll> B (n+1);
   vector<ll> C (n+1);
   unordered_map<ll, ll> freq;
   ll cont = 0;
   for (ll i = 1 ; i <= n ; i ++){
      cin >> A[i];
   }
   for (ll i = 1 ; i <= n ; i ++){
      cin >> B[i];
   }
   for (ll i = 1 ; i <= n ; i ++){
      cin >> C[i];
      freq[B[C[i]]] ++;
   }
   for (ll i = 1 ; i <= n ; i ++){
      cont += freq[A[i]];
   }
   cout << cont << "\n";
   return 0;
}