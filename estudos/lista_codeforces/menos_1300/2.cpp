#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   vector<vector<int>> matriz(5, vector<int>(5));
   int indexI, indexJ;
   for (int i = 0 ; i < 5 ; i++){
    for (int j = 0 ; j < 5 ; j++){
        cin >> matriz[i][j];
        if (matriz[i][j] == 1){
            indexI = i;
            indexJ = j;
        }
    }
   }
   int op = abs(indexI-2) + abs(indexJ-2);
   cout << op << "\n";
   return 0;
}