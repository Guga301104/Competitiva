#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int a, b;
   cin >> a >> b;
   vector<int> A(a);
   vector<int> B(b);
   for (int i = 0 ; i < a ; ++i){
    cin >> A[i];
   }
   for (int j = 0 ; j < b ; ++j){
    cin >> B[j];
   }
   size_t l = 0;
   int c = 0;
   for (size_t k = 0 ; k < A.size() && l < B.size() ; ++k){
    if (A[k] == B[l]){
        c ++;
        l ++;
    }
   }
   if (c  == B.size()) cout << "S\n";
   else cout << "N\n";
   return 0;
}