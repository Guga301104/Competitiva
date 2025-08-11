#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0 ; i < T ; i++) {
        int PA, PB;
        double G1, G2;
        cin >> PA >> PB >> G1 >> G2;
        int years = 0;
        while (PA <= PB) {
            PA += static_cast<int>(PA * (G1 / 100));
            PB += static_cast<int>(PB * (G2 / 100));
            years += 1;
            if (years > 100) {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (years <= 100) {
            cout << years << " anos." << endl;
        }
    }
    return 0;
}
