#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int c = 0;
   vector<int> lista(5);
   vector<int> basico = {1,2,3,4,5};
   for (int i = 0 ; i < 5 ; i++){
    cin >> lista[i];
   }
    for (int j = 0 ; j < 4 ; j++){
        if (lista[j] != basico[j]){
            if (lista[j+1] != basico[j+1]) c++;
        }
    }
    if (c == 1) cout << "Yes\n";
   else cout << "No\n";
   return 0;
}