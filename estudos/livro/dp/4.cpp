#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

const int MOD = 1e9 + 7;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, x; cin >> n >> x;
   vi coins (n);
   for (int i = 0 ; i < n ; i++) cin >> coins[i];
   vi dp (x+1);
   dp[0] = 1;
   for (auto c : coins){
    for (int i = c ; i <= x ; i++){
        dp[i] += dp[i-c];
        dp[i] %= MOD;
    }
   }
   cout << dp[x] << "\n";

   return 0;
}