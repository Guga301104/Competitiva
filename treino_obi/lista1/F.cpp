#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int V, A, F, P;
    cin >> V >> A >> F >> P;
    
    vector<int> contas = {A, F, P};
    sort(contas.begin(), contas.end());
    
    int total = 0;
    int pagas = 0;
    
    for (int i = 0; i < 3; i++) {
        if (total + contas[i] <= V) {
            total += contas[i];
            pagas++;
        } else {
            break;
        }
    }
    
    cout << pagas << endl;

   return 0;
}