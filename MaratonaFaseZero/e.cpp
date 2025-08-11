#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll y, k; cin >> y >> k;
   ll x = 1;
   ll temp = y;
   vector<ll> primos;
   for (int i = 2 ; i*i <= temp ; i++){
    if (temp % i == 0){
        primos.push_back(i);
        while (temp % i == 0) temp /= i;
    }
   }
   if (temp > 1) primos.push_back(temp);

   while (k > 0){
    ll mdc = gcd(x, y);
    if (mdc == y){
        x += (y * k);
        break;
    }
    ll x1 = x/mdc;
    ll y1 = y/mdc;
    ll t = LLONG_MAX;
    for (ll p : primos){
        if (y1 % p == 0){
            ll rem = x1 % p;
            ll f = (p - rem) % p;
            if (f > 0) t = min(f, t);
        }
    }
    if (t >= k){
        x += (mdc * k);
        break;
    }
    x += (mdc * t);
    k -= t;
   }
   cout << x << "\n";
   return 0;
}