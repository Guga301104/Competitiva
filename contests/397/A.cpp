#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   double x;
   cin >> x;
   if (x >= 38) cout << "1\n";
   else if (x >= 37.5 && x < 38) cout << "2\n";
   else cout << "3\n";
   return 0;
}