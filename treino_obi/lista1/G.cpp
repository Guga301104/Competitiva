#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int D, A, N;
    cin >> D >> A >> N;
    
    int diaria;
    if (N <= 15) {
        diaria = D + (N - 1) * A;
    } else {
        diaria = D + 14 * A;
    }
    
    int dias = 32 - N;
    cout << dias * diaria << endl;

   return 0;
}