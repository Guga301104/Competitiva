#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> lista(7);
   for (int i = 0 ; i < 7 ; i++){
    cin >> lista[i];
   }
   int j = 0;
   while (n > 0){
    n -= lista[j];
    if (n <= 0) break;
    j++;
    if (j == 7) j = 0;
   }
   cout << (j + 1) << "\n";
   return 0;
}