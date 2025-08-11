#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin >> n;
   vector <int> lista(n);
   vector <int> results;
   
   for (int i = 0 ; i < n ; i++){
    cin >> lista[i];
   }

   for (int i = 0 ; i < n-1 ; i++){
    set<int> esq(lista.begin(), lista.begin() + i);
    set<int> dir(lista.begin()+i+1, lista.end());
    int n = esq.size() + dir.size();
    results.push_back(n);
   }

   int y = *max_element(results.begin(), results.end());
   cout << y << "\n";
   return 0;
}