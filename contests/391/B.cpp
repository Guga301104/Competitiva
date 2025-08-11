#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, m;
   cin >> n >> m;
   vector<string> grid1 (n);
   vector<string> grid2 (m);
   for (int i = 0 ; i < n ; i++){
    cin >> grid1[i];
   }
   for (int i = 0 ; i < m ; i++){
    cin >> grid2[i];
   }
   int indexI = -1, indexJ = -1;
   for (int i = 0 ; i <= n-m ; i++){
    for (int j = 0 ; j <= n-m ; j++){
        bool valido = true;
        for (int k = 0 ; k < m ; k++){
            if (grid1[i+k].substr(j, m) != grid2[k]){
                valido = false;
                break;
            }
        }
        if (valido) {
            indexI = i+1;
            indexJ = j+1;
        }
    if (indexI != -1) break;
    }
   }
   cout << indexI << " " << indexJ << "\n";
   return 0;
}