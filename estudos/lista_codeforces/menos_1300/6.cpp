#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   vector<vector<int>> matriz (5, vector<int>(5, 1));
   vector<vector<int>> clicks (5, vector<int>(5));
   for (int i = 1 ; i <= 3 ; i++){
    for (int j = 1 ; j <= 3 ; j++){
        cin >> clicks[i][j];
        if (clicks[i][j] % 2 != 0){
            matriz[i][j] = 1 - matriz[i][j];
            matriz[i-1][j] = 1 - matriz[i-1][j];
            matriz[i+1][j] = 1 - matriz[i+1][j];
            matriz[i][j-1] = 1 - matriz[i][j-1];
            matriz[i][j+1] = 1 - matriz[i][j+1];
        }
    }
   }
   for (int i = 1 ; i <= 3 ; i++){
    for (int j = 1 ; j <= 3 ; j++){
        cout << matriz[i][j];
    }
    cout << "\n";
   }
   return 0;
}