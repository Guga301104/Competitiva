#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, k;
   cin >> n >> k;
   vector<int> lista(n);
   for (int i = 0 ; i < n ; i++){
    cin >> lista[i];
   }
   sort(lista.begin(), lista.end());
   cout << lista[n-k] << "\n";
   return 0;
}