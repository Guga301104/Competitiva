#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n, total = 0, soma = 0, j = 1, maiorJ = 1;
    cin >> n;
    vector<long long int> ovelhas(n+1);
    ovelhas[0] = 0;
    for (long long int i = 1 ; i <= n ; i++){
        cin >> ovelhas[i];
        total += ovelhas[i];
    }
    while (j > 0 && j < n+1){
        if (j > maiorJ) maiorJ = j;
        if (ovelhas[j]%2 == 0){
            if (ovelhas[j] > 0){
                ovelhas[j] -= 1;
                soma += 1;
            } 
            j -= 1;
        }else{
            if (ovelhas[j] > 0){
                ovelhas[j] -= 1;
                soma += 1;
            } 
            j += 1;
        }
    }
    cout << maiorJ << " " << (total - soma) << endl;
    return 0;
}