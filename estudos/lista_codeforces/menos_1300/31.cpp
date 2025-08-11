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
   int n; cin >> n;
   int soma = 0;
   REP(i, 0, n){
    int x; cin >> x;
    soma += x;
   }
   int cont = 0;
   REP(i, 1, 6){
    if (((soma + i) % (n+1)) != 1) cont ++;
   }
   cout << cont << "\n";
   return 0;
}