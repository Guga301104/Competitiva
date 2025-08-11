#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string nome;
   cin >> nome;
   if (nome == "N") nome = "S\n";
   else if (nome == "S") nome = "N\n";
   else if (nome == "W") nome = "E\n";
   else if (nome == "E") nome = "W\n";
   else if (nome == "SE") nome = "NW\n";
   else if (nome == "NW") nome = "SE\n";
   else if (nome == "NE") nome = "SW\n";
   else if (nome == "SW") nome = "NE\n";
   cout << nome;
   return 0;
}