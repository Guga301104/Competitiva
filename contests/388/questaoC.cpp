#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   ll int c = 0;
   cin >> n;
   vector<int> lista;
   for (int i = 0 ; i < n ; ++i){
    int x;
    cin >> x;
    lista.push_back(x);
   }
   for (int j = 0 ; j < n-1 ; j++){
    int a = lista[j];
    auto b = lower_bound(lista.begin()+j+1, lista.end(), 2*a);
    int y = distance(b, lista.end());
    c += y;
   }
   cout << c << "\n";
   return 0;
}