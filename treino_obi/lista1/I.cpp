#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int IA, IB, FA, FB;
    cin >> IA >> IB >> FA >> FB;
    
    int diffA = (IA != FA);
    int diffB = (IB != FB);
    
    if (diffA == 0 && diffB == 0) {
        cout << 0 << endl;
    } else if (diffA == 1 && diffB == 0) {
        cout << 1 << endl;
    } else if (diffA == 0 && diffB == 1) {
        cout << 2 << endl;
    } else {
        if ((FA == FB && IA != IB) || (FA != FB && IA == IB)) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    }

   return 0;
}