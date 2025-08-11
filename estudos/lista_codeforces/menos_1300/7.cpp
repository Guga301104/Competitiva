#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   string x = "";
   int mai = 0, min = 0;
   for (char c : s){
    if (c == toupper(c)) mai ++;
    else min ++;
   }
   if (mai > min){
    for (char c : s){
        x += toupper(c);
    }
   } else {
    for (char c : s){
        x += tolower(c);
    }
   }
   cout << x << "\n";
   return 0;
}