#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s; getline(cin, s);
   string x;
   if (s == "Brasil") x = "galinha\n";
   else if (s == "Argentina") x = "gallina\n";
   else if (s == "Alemanha") x = "huhn\n";
   else if (s == "Estados Unidos") x = "hen ou chicken\n";
   else if (s == "Franca") x = "poule\n";
   else if (s == "Israel") x = "tarnegolet\n";
   else if (s == "Egito") x = "farkha\n";
   else if (s == "Italia") x = "gallina\n";
   else if (s == "Polonia") x = "kura\n";
   else if (s == "Finlandia") x = "kana\n";
   else if (s == "Japao") x = "niwatori\n";
   else if (s == "Russia") x = "kuritsa\n";
   else if (s == "Angola") x = "to fraca\n";
   cout << x;
   return 0;
}