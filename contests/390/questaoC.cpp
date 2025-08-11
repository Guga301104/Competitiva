#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int lin, col;
   cin >> lin >> col;
   vector<string> grid(lin);
   vector<int> linhas;
   vector<int> colunas;
   for (int i = 0 ; i < lin ; i++){
    cin >> grid[i];
    for (int j = 0 ; j < col ; j++){
        if (grid[i][j] == '#'){
            linhas.push_back(i);
            colunas.push_back(j);
        }   
    }
   }
   sort(linhas.begin(), linhas.end());
   sort(colunas.begin(), colunas.end());
   int a, b, c, d;
   a = linhas[0];
   b = linhas.back();
   c = colunas[0];
   d = colunas.back();
   bool valido = true;
    for (int i = a ; i <= b ; i++){
        for (int j = c ; j <= d ; j++){
            if (grid[i][j] == '.') valido = false; 
        }
    }
    if (valido) cout << "Yes\n";
    else cout << "No\n";
   return 0;
}