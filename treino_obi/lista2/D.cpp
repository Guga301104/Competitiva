#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   char jogo;
    int vitorias = 0;
    
    for (int i = 0; i < 6; i++) {
        cin >> jogo;
        if (jogo == 'V') vitorias++;
    }
    
    if (vitorias >= 5) cout << 1 << endl;
    else if (vitorias >= 3) cout << 2 << endl;
    else if (vitorias >= 1) cout << 3 << endl;
    else cout << -1 << endl;
    
   return 0;
}