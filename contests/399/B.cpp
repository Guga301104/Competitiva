#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin >> n;
   vector<int> pontos(n);
   vector<int> rank(n);
   for (int i = 0 ; i < n ; ++i){
    cin >> pontos[i];
   }
   int r = 1;
   int c = 0, x = 0;
   for (int j = 0 ; j < n ; ++j){
    int maior = *max_element(pontos.begin(), pontos.end());
    for (int k = 0 ; k < n ; ++k){
        if (pontos[k] == maior){
            x ++;
            c ++;
            rank[k] = r;
            pontos[k] = -1;
        }
    }
    if (c == n) break;
    r += x;
    x = 0;
   }
   for (int l = 0 ; l < n ; ++l){
    cout << rank[l] << "\n";
   }
   return 0;
}