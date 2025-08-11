#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s;
   cin >> s;
   int x = s[0] - '0';
   int y = s[2] - '0';
   cout << x*y << "\n";
   return 0;
}