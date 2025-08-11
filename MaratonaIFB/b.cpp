#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<vector<int>> mat (n, vector<int> (n));
   vector<set<int>> linhas(n), colunas(n);
   for (int i = 0 ; i < n ; i++){
    for (int j = 0 ; j < n ; j++){
        cin >> mat[i][j];
        if (mat[i][j] != 0){
            linhas[i].insert(mat[i][j]);
            colunas[j].insert(mat[i][j]);
        }
    }
   }
   for (int i = 0 ; i < n ; i++){

   }
   return 0;
}