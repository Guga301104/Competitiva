#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
    int M, A, B;
    cin >> M >> A >> B;

    int C = M - (A + B); 
    int mais_velho = max(A, max(B, C));

    cout << mais_velho << endl;

   return 0;
}