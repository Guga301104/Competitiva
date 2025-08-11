#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; ++i){
        vector<int> posicoes;
        string p1, p2, inc;
        cin >> p1 >> p2 >> inc;
        for (int j = 0 ; j < inc.length() ; ++j){
            if (inc[j] == '_') posicoes.push_back(j);
        }
        if (p1[posicoes[0]] == p2[posicoes[1]] || p1[posicoes[1]] == p2[posicoes[0]]) cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}