#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   float n; cin >> n;
   float soma = 0;
   for (int i = 0 ; i < n ; i++){
    float x; cin >> x;
    soma += x;
   }
   n *= 100;
   float res = soma / n;
   res *= 100;
   cout << fixed << setprecision(12) << res << "\n";
   return 0;
}