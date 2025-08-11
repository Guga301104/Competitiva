#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int a, b, c; cin >> a >> b >> c;
   if (c%2==0){
    if (abs(a) > abs(b)) cout << ">\n";
    else if (abs(a) < abs(b)) cout << "<\n";
    else cout << "=\n";
   } else {
    if (a > b) cout << ">\n";
    else if (a < b) cout << "<\n";
    else cout << "=\n";;
   }
   return 0;
}