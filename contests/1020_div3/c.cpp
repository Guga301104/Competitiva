#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--){
    int n, k; cin >> n >> k;
    vector<int> A(n);
    vector<int> B(n);
    for (int i = 0 ; i < n ; i++){
        cin >> A[i];
    }
    for (int i = 0 ; i < n ; i++){
        cin >> B[i];
    }
    int somaA = -1;
    bool valido = true;
    for (int i = 0 ; i < n ; i++){
        if (B[i] != -1) {
            int somaB = A[i] + B[i];
            if (somaB != somaA && somaA != -1) valido = false;
            else somaA = somaB;
        }
    }
    if (!valido){
        cout << "0\n";
    }
    else if (count(B.begin(), B.end(), -1) == n){
        sort(A.begin(), A.end());
        int resultado = (A[0] + k) - A[A.size()-1] + 1;
        cout << resultado << "\n";
    }
    else {
        bool validoB = true;
        for (int i = 0 ; i < n ; i++){
            if (somaA - A[i] > k) validoB = false;
            if (A[i] > somaA) validoB = false;
        }
        if (validoB) cout << "1\n";
        else cout << "0\n";
    }
   }
   return 0;
}