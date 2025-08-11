#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

const int MOD = 1e9 + 7;
const int N = 1e6 + 1;
int dp[N];

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

    int n; cin >> n;
    vector<int> dados = {1,2,3,4,5,6};
    dp[0] = 1;
    for (int i = 1 ; i <= N ; i++){
        for (auto d : dados){
            if (i-d >= 0){
                dp[i] += dp[i-d];
                dp[i] %= MOD;
            }
        }
    }
    cout << dp[n] << "\n";

   return 0;
}