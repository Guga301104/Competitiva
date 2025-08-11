#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--){
    int n; cin >> n;
    vector<vector<int>> mat (n+1, vector<int>(n+1));
    vector<int> perm (2*n+1);
    int menor = 801, maior = 0;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            cin >> mat[i][j];
            perm[i+j] = mat[i][j];
            if (mat[i][j] > maior) maior = mat[i][j];
            if (mat[i][j] < menor) menor = mat[i][j];
        }
    }
    vector<int> cont (maior);
    iota(cont.begin(), cont.end(), 1);
    for (int i = 0 ; i < cont.size() ; i++){
        if (count(perm.begin(), perm.end(), cont[i]) == 0){
            perm[1] = cont[i];
            break;
        }
    }
    if (perm[1] == 0) perm[1] = maior+1;
    for (int i = 1 ; i <= 2*n ; i++){
        cout << perm[i] << (i != 2*n ? " " : "");
    }
    cout << "\n";
   }
   return 0;
}