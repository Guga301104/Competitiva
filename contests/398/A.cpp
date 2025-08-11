#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin >> n;
   string x = "";
   for (int i = 0 ; i < (n-1)/2 ; ++i){
    x += "-";
   }
   if (n%2 == 0) x += "==";
   else x += "=";
   for (int j = 0 ; j < (n-1)/2 ; ++j){
    x += "-";
   }
   cout << x << "\n";
   return 0;
}