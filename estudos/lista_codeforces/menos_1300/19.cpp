#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   int trem = 0;
   int max = -1;
   while (t--){
    int a, b; cin >> a >> b;
    trem -= a; trem += b;
    if (trem > max) max = trem;
   }
   cout << max << "\n";
   return 0;
}