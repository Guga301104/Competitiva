#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
const int MOD = 1e9 + 7;

ll Mexp (ll x, ll ex){
    ll re = 1;
    x %= MOD;
    while (ex > 0){
        if (ex & 1) re = re * x % MOD;
        x = x * x % MOD;
        ex >>= 1;
    }
    return re;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll N; cin >> N;
   ll resposta = Mexp(2, N+1)-3;
   resposta %= MOD;
   if (resposta < 0) resposta += MOD;
   cout << resposta << "\n";
   return 0;
}