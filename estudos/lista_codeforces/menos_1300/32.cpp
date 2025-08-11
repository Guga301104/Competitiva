#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a ; i < b ; i++)

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   queue<pi> fila;
   REP(i, 0, n){
    int x; cin >> x;
    fila.push({x, i});
   }
   int final = n;
   while(!fila.empty()){
    auto [valor, index] = fila.front();
    fila.pop();
    valor -= m;
    if (valor > 0){
        fila.push({valor, index});
        final = index + 1;
    }
   }
   cout << final << "\n";
   return 0;
}