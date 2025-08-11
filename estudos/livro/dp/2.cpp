#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

const int INF = 1e7;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int n; cin >> n;
   int x; cin >> x;
   vector <int> dp (x+1, INF);
   vector <int> moedas (n);
   for (int i = 0 ; i < n ; i++){
    cin >> moedas[i];
   }
   dp[0] = 0;
   for (int i = 1 ; i <= x ; i++){
    for (auto m : moedas){
        if (i-m >= 0){
            dp[i] = min(dp[i], dp[i-m] + 1);
        }
    }
   }
   if (dp[x] == INF) cout << "-1\n";
   else cout << dp[x] << "\n";

   return 0;
}