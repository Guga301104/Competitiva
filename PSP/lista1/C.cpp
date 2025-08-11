#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   int n = s.length();
   ll soma = 0;
   for (int m = 0 ; m < (1 << (n-1)) ; ++m){
    ll atual = 0;
    ll temp = s[0] - '0';
    for (int i = 0 ; i < n-1 ; ++i){
        if (m & (1 << i)){
            atual += temp;
            temp = s[i+1] - '0';
        } else {
            temp *= 10;
            temp += s[i+1] - '0';
        }
    }
    atual += temp;
    soma += atual;
   }
   cout << soma << "\n";
   return 0;
}