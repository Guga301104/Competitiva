#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int somaDig(int x){
    int soma = 0;
    while (x > 0){
        soma += x%10;
        x /= 10;
    }
    return soma;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int n, m, s;
   cin >> n >> m >> s;

   int maior = -1;

   for (int i = n ; i <= m ; i++){
    if(somaDig(i) == s) maior = i;
   }
    cout << maior << '\n';
    
   return 0;
}