#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<bool> lista(2*n + 2);
   while (true){
    for (int i = 1 ; i <= 2*n+1 ; i++){
        if (!lista[i]){
            cout << i << "\n";
            cout.flush();
            lista[i] = true;
            break;
        }
    }

    int x; cin >> x;
    if (x == 0) break;
    lista[x] = true;
   }
   return 0;
}