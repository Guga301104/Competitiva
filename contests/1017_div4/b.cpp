#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--){
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int tamanho = m+1;
    int ini = max(l, -m);
    int fim = ini + m;
    if (fim > r){
        fim = r;
        ini = r-m;
    }
    cout << ini << " " << fim << "\n";
   }
   return 0;
}