#include <bits/stdc++.h>
using namespace std;
int main() {
    int comp, quest;
    int gQ = 0, gT = 0;
    cin >> comp >> quest;
    vector<pair<int, int>> competidores;
    for (int i = 0 ; i < comp ; i++){
        int Q, T;
        cin >> Q >> T;
        competidores.push_back({Q,T});

    }
    for (const auto& competidor : competidores){
        int Q, T;
        Q = competidor.first;
        T = competidor.second;
        if(Q > gQ){
            gQ = Q;
            gT = T;
        }
        else if (Q == gQ) gT = min(T, gT);
    }
    if (gQ == quest) cout << gQ << " " << gT - 1 << endl;
    else cout << gQ + 1 << " " << gT << endl;
    return 0;
}