#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int N;
   cin >> N;
   int x = 1, c = 1;
   while (x < N){
    x *= x+1;
    c += 1;
   }
   cout << c << "\n";
   return 0;
}