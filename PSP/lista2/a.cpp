#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int somaDigitos(int x){
    int soma = 0;
    while (x != 0){
        soma += x%10;
        x /= 10;
    }
    return soma;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cont = 1;
   int i = 19;
   while (cont != n){
    i ++;
    if (somaDigitos(i) == 10){
        cont ++;
    }
   }
   cout << i << "\n";
   return 0;
}