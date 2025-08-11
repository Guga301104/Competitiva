#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n;
   cin >> n;
   vector<ll> lista, marc(n+1,0);
   for (int i = 0 ; i < n ; i++){
    ll x;
    cin >> x;
    lista.push_back(x);
   }
   for (int j = 0 ; j < n ; j++){
    ll a = lista[j];
    if (j+lista[j]<n){
        for (int k = j+1 ; k < j+lista[j] ; k++){
            if (a>0){
                a -= 1;
                marc[j] -= 1;
                marc[k] += 1;
            }
        }
    } else if (j+1 < n){
        for (int k = j+1 ; k < n ; k++){
            if(a>0){
                marc[j] -= 1;
                marc[k] += 1;
            }
        }
    }
    lista[j] += marc[j];
    if (lista[j] < 0) lista[j] = 0;
    cout << lista[j] << " ";
   }
   cout << "\n";
   return 0;
}