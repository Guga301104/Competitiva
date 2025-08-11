#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int y; cin >> y;
   y ++;
   while (true){
    string s = to_string(y);
    set <char> numeros;
    for (char c : s){
        numeros.insert(c);
    }
    if (numeros.size() == s.length()) break;
    else y ++;
   }
   cout << y << "\n";
   return 0;
}