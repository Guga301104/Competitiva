#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void dfs(int ini, int dest, map<int, vector<int>>& grafo, 
         vector <bool>& visitado, vector<int>& caminho, int &cont){
   caminho.push_back(ini);
   visitado[ini] = true;
   if (ini == dest){
      for (int i = 0 ; i < caminho.size() ; i++){
         cout << "   " << caminho[i];
      }
      cout << "\n";
      cont ++;
   } else {
      for (int v : grafo[ini]){
         if (!visitado[v]){
            dfs(v, dest, grafo, visitado, caminho, cont);
         }
      }
   }
   caminho.pop_back();
   visitado[ini] = false;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   int c = 1;
   while (cin >> n){
      map <int, vector<int>> grafo;
      int u, v;
      int maior = -1;
      while (cin >> u >> v && (u != 0 || v != 0)){
         if (u > maior) maior = u;
         if (v > maior) maior = v;
         if (u == 0 && v == 0) break;
         grafo[u].push_back(v);
         grafo[v].push_back(u);
      }
      for (int i = 1 ; i <= maior ; i++){
         sort(grafo[i].begin(), grafo[i].end());
      } 
      cout << "CASE " << c++ << ":\n";
      vector <bool> visitado(maior, false);
      vector <int> caminho;
      int cont = 0;
      dfs(1, n, grafo, visitado, caminho, cont);
      cout << "There are " << cont << " routes from the firestation to streetcorner " << n << ".\n";
   }
   return 0;
}