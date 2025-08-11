#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, costa = 0;
    cin >> m >> n;
    vector<string> mapa(m);
    for (int i = 0; i < m; ++i) cin >> mapa[i];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mapa[i][j] == '#') {
                if (i == 0 || i == m - 1 || j == 0 || j == n - 1 || 
                    mapa[i - 1][j] == '.' || mapa[i + 1][j] == '.' || 
                    mapa[i][j - 1] == '.' || mapa[i][j + 1] == '.') {
                    costa++;
                }
            }
        }
    }
    cout << costa << endl;
    return 0;
}
