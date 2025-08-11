#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   string placa;
   cin >> placa;
   
   if (placa.length() == 8 && placa[3] == '-') {
      bool antigo = true;
      for (int i = 0; i < 3; i++) {
         if (!isupper(placa[i])) antigo = false;
      }
      for (int i = 4; i < 8; i++) {
         if (!isdigit(placa[i])) antigo = false;
      }
      if (antigo) {
         cout << 1 << endl;
         return 0;
      }
   }
   
   if (placa.length() == 7) {
      bool novo = true;
      for (int i = 0; i < 3; i++) {
         if (!isupper(placa[i])) novo = false;
      }
      if (!isdigit(placa[3])) novo = false;
      if (!isupper(placa[4])) novo = false;
      for (int i = 5; i < 7; i++) {
         if (!isdigit(placa[i])) novo = false;
      }
      if (novo) {
         cout << 2 << endl;
         return 0;
      }
   }
   
   cout << 0 << endl;
   return 0;
}