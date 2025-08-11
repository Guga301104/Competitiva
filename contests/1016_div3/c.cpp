#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mulmod(ll a, ll b, ll mod) {
    ll res = 0;
    a %= mod;
    while (b) {
        if (b & 1) res = (res + a) % mod;
        a = (a * 2) % mod;
        b >>= 1;
    }
    return res;
}

ll powmod(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = mulmod(res, a, mod);
        a = mulmod(a, a, mod);
        b >>= 1;
    }
    return res;
}

bool millerRabin(ll n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    
    ll d = n - 1;
    int s = 0;
    while (d % 2 == 0) {
        d /= 2;
        s++;
    }
    
    for (ll a : {2, 7}) {
        if (a >= n) continue;
        ll x = powmod(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool composto = true;
        for (int r = 1; r < s; r++) {
            x = mulmod(x, x, n);
            if (x == n - 1) {
                composto = false;
                break;
            }
        }
        if (composto) return false;
    }
    return true;
}

ll repeteNumero(ll x, int k) {
    ll base = x;
    ll pot = to_string(x).size();
    ll res = base;
    for (int i = 1; i < k; i++) {
        res = res * pow(10, pot) + base;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll x;
        int k;
        cin >> x >> k;
        ll y = repeteNumero(x, k);
        if (millerRabin(y)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}