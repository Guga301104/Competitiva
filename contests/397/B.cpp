#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   string s;
   cin >> s;
   int cont = 0;
   string x = "";

   for (int i = 0 ; i < s.size() ; i++){
    if (i%2 == 0 && s[i] != 'i'){
        x += s.substr(0, i);
        x += "io";
        x += s.substr(i+1, s.size() - (i+1));
        s = x;
        x = "";
        cont ++;
        i ++;
    } else if (i%2 != 0 && s[i] != 'o'){
        x += s.substr(0, i);
        x += "oi";
        x += s.substr(i+1, s.size() - (i+1));
        s = x;
        x = "";
        cont ++;
        i ++;
    }
   }
   
   if (s.size()%2 != 0){
    s += 'o';
    cont ++;
   }

   cout << cont << "\n";
   
   return 0;
}