#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int D;
    cin >> D;
    
    int resto = (D - 3) % 8;
    
    if (resto == 3) {
        cout << 1 << endl;
    }
    else if (resto == 4) {
        cout << 2 << endl;
    }
    else if (resto == 5) {
        cout << 3 << endl;
    }
   
   return 0;
}