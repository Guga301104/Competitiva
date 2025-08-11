#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

const int MOD = 1e9 + 7;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;
   vector <string> matriz (n);
   vector <vi> dp (n, vi (n));

   for (int i = 0 ; i < n ; i++) cin >> matriz[i];

   if (matriz[0][0] == '.') dp[0][0] = 1;
   for (int i = 0 ; i < n ; i++){
    for (int j = 0 ; j < n ; j++){
        if (matriz[i][j] == '*') continue;
        if (i > 0){
            dp[i][j] += dp[i-1][j];
            dp[i][j] %= MOD;
        }
        if (j > 0){
            dp[i][j] += dp[i][j-1];
            dp[i][j] %= MOD;
        }
    }
   }
   cout << dp[n-1][n-1] << "\n";

   return 0;
}