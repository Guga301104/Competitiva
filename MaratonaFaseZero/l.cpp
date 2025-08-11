#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   unsigned long long m; cin >> m;
   unsigned long long bits = m * 8ULL * 1000000ULL;
   int n = 0;
   unsigned long long y = 1;
   while (y < bits){
    y <<= 1;
    n++;
   }
   cout << n << "\n";
   return 0;
}