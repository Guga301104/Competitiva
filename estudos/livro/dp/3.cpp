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
   vector <int> dp (x+1);
   vector <int> coins (n);
   for (int i = 0 ; i < n ; i++) cin >> coins[i];
   dp[0] = 1;
   for (int i = 1 ; i <= x ; i++){
    for (auto c : coins){
        if (i-c >= 0){
            dp[i] += dp[i-c];
            dp[i] %= MOD;
        }
    }
   }
   cout << dp[x] << "\n";

   return 0;
}