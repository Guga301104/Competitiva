#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   bool valido = true;
    cin >> n;
   vector<ll> lista(n);
    for (int i = 0 ; i < n ; i ++){
        cin >> lista[i];
    }
    for(int i = 2 ; i < n ; i ++){
        if (lista[i]*lista[i-2] != lista[i-1]*lista[i-1]){
            valido = false;
            break;
        }
    }
    if (valido) cout << "Yes\n";
    else cout << "No\n";
   return 0;
}