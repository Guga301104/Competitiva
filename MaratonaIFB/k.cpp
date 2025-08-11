#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nParticipantes;
    long long xSaad;
    cin >> nParticipantes >> xSaad;
    vector<int> lista(nParticipantes);
    int valorMaximo = xSaad;
    for (int i = 0; i < nParticipantes; i++) {
        cin >> lista[i];
        if (lista[i] > valorMaximo) valorMaximo = lista[i];
    }

    vector<int> menorFator(valorMaximo + 1);
    for (int i = 2; i <= valorMaximo; i++) {
        if (menorFator[i] == 0) {
            for (int j = i; j <= valorMaximo; j += i) {
                if (menorFator[j] == 0) menorFator[j] = i;
            }
        }
    }

    unordered_set<int> primosSaad;
    long long temp = xSaad;
    while (temp > 1) {
        int p = (temp <= valorMaximo ? menorFator[temp] : temp);
        primosSaad.insert(p);
        while (temp % p == 0) temp /= p;
    }
    int contBase = primosSaad.size();

    int indiceMelhor = 0;
    int melhorContagem = -1;
    for (int i = 0; i < nParticipantes; i++) {
        long long valor = lista[i];
        int contNovos = 0;
        unordered_set<int> vistos;
        while (valor > 1) {
            int p = menorFator[valor];
            if (!vistos.count(p) && !primosSaad.count(p)) {
                contNovos++;
                vistos.insert(p);
            }
            valor /= p;
        }
        int total = contBase + contNovos;
        if (total > melhorContagem) {
            melhorContagem = total;
            indiceMelhor = i;
        }
    }

    cout << (indiceMelhor + 1) << "\n";
    return 0;
}
