#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int k, s;
   cin >> k >> s;
   int cont = 0;
   for (int i = 0 ; i <= k ; ++i){
    for (int j = 0 ; j <= k ; ++j){
        int l = (s - i - j);
        if (l >= 0 && l <= k) cont ++;
    }
   }
   cout << cont << "\n";
   return 0;
}