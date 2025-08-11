#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    char matriz[N][M];
    bool xadrez = true;
    for (int i = 0 ; i < N ; i++){
        string a;
        cin >> a;
        for (int j = 0 ; j < M ; j++){
            matriz[i][j] = a[j];
        }
    }
    for (int i = 0 ; i < N - 1 ; i++){
        for (int j = 0 ; j < M - 1 ; j++){
            if (matriz[i][j] == matriz[i][j+1]) xadrez = false;
            if (matriz[i][j] == matriz[i+1][j]) xadrez = false;
        }
    }
    if (xadrez) cout << "S\n";
    else cout << "N\n";
    return 0;
}