#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int somaX = 0, somaY = 0, somaZ = 0;
   while (n--){
    int x, y, z;
    cin >> x >> y >> z;
    somaX += x;
    somaY += y;
    somaZ += z;
   }
   if (somaX == 0 && somaY == 0 && somaZ == 0) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}