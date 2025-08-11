#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int N, X; cin >> N >> X;
   int soma = 0;
   vector<int> acidez (N);
   vector<int> qualidade (N);
   vector<int> resposta (N+1, 0);
   for (int i = 0 ; i < N ; i++){
    cin >> acidez[i] >> qualidade[i];
   }
   for (int m = 1 ; m < (1 << N) ; m++){
    int ac = 0, q = 0, qtd = 0;
    for (int i = 0 ; i < N ; i++){
        if (m & (1<<i)){
            ac += acidez[i];
            q += qualidade[i];
            qtd ++;
        }
        if (ac <= X) {
            resposta[qtd] = max(resposta[qtd], q);
        }
    }
   }
   for (int i = 1 ; i <= N ; i++){
    cout << resposta[i] << " ";
   }
   cout << "\n";
   return 0;
}