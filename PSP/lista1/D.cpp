#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll int n;
   cin >> n;
   vector<ll int> cards(n);
   ll int soma = 0;
   for (int i = 0 ; i < n ; ++i){
    cin >> cards[i];
    soma += cards[i];
   }
   ll int res = LLONG_MAX;
   ll int somaX = 0;
   for (int j = 0 ; j < n-1 ; ++j){
    somaX += cards[j];
    ll int dif = abs(somaX*2 - soma);
    res = min(res, dif);
   }
   cout << res << "\n";
   return 0;
}