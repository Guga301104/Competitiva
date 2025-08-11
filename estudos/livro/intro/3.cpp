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
   string s; cin >> s;
   int n = s.size();
   int maior = 1;
   int cont = 1;
   REP(i, 1, n){
    if (s[i] == s[i-1]) {
        cont ++;
        continue;
    }
    maior = max(maior, cont);
    cont = 1;
   }
   maior = max(maior, cont);
   cout << maior << "\n";
   return 0;
}