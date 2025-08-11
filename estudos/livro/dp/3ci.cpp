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
   vi dp(x+1);
   dp[0]=1;
   vi moedas (n);
   for (int i=0;i<n;i++) cin >> moedas[i];
   for (int i=1;i<=x;i++){
    for (auto s:moedas){
        if (i-s >= 0){
            dp[i]+=dp[i-s];
            dp[i]%=MOD;
        }
    }
   }
   cout << dp[x] << endl;
   return 0;
}