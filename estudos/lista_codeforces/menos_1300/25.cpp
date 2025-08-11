#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
    int amigos, garrafas, ml_por_garrafa;
    int limoes, fatias_por_limao, sal;
    int ml_por_brinde, sal_por_brinde;

    cin >> amigos >> garrafas >> ml_por_garrafa;
    cin >> limoes >> fatias_por_limao >> sal;
    cin >> ml_por_brinde >> sal_por_brinde;

    int total_ml = garrafas * ml_por_garrafa;
    int total_fatias = limoes * fatias_por_limao;
    int brindes_bebida = total_ml / ml_por_brinde;
    int brindes_limão = total_fatias;
    int brindes_sal = sal / sal_por_brinde;

    int brindes_possiveis = min({brindes_bebida, brindes_limão, brindes_sal});
    int brindes_por_amigo = brindes_possiveis / amigos;

    cout << brindes_por_amigo << endl;

    return 0;
}