#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

const int INF = 1e6 + 1;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int x; cin >> x;
   vi dp (x+1, INF);
   dp[0] = 0;
   for (int i = 1 ; i <= x ; i++){
    int auxI = i;
    while (auxI > 0){
        int c = auxI % 10;
        dp[i] = min(dp[i], dp[i-c] + 1);
        auxI /= 10;
    }
   }
   if (dp[x] == INF) cout << "-1\n";
   else cout << dp[x] << "\n";

   return 0;
}