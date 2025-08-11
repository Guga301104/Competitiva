#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int E, D;
    cin >> E >> D;
    if (E > D) {
        cout << E + D << endl;
    } else {
        cout << 2 * (D - E) << endl;
    }

   return 0;
}