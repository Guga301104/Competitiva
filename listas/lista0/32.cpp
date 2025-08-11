#include <bits/stdc++.h>
using namespace std;
int main() {
    int soma = 0;
    for (int i = 0 ; i < 4 ; i++){
        int a;
        cin >> a;
        if (i == 3){
            soma += a;
            break;
        }
        soma += (a - 1);
    }
    cout << soma << endl;
    return 0;
}