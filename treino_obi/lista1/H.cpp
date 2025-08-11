#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (((a == c) && (b != d)) || ((b == d) && (a != c))) cout << "V\n";
    else cout << "F\n";

   return 0;
}