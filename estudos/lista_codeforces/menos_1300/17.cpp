#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int contE = 0, contD = 0;
   for (int i = 0 ; i < n ; i++){
      int a, b;
      cin >> a >> b;
      if (a == 1) contE ++;
      if (b == 1) contD ++;
   }
   int total = 0;
   if (contE <= n/2) total += contE;
   else total += (n-contE);
   if (contD <= n/2) total += contD;
   else total += (n-contD);
   cout << total << "\n";
   return 0;
}