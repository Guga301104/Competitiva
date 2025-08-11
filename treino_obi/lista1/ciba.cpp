#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int N;
   cin >> N;
   vector <int> fitas (N);

   for (int i = 0 ; i < N ; ++i){
    cin >> fitas[i];
   }

   for (int i = 0 ; i < N ; ++i){
    if (fitas[i] == -1){
        int c = 0;
        int menor = N+1; 
        for (int j = i ; j < N ; j++){
            if (fitas[j] == 0){
                menor = j - i;
                break;
            }
        }
        for (int k = i ; k >= 0 ; k--){
            if (fitas[k] == 0){
                c = i - k;
                if (c < menor) menor = c;
                break;
            }
        }
        if (menor > 9) menor = 9;
        fitas[i] = menor;
    }
   }

   for (int l = 0 ; l < N ; ++l){
    cout << fitas[l];
    if (l < N-1) cout << " ";
   }
   cout << "\n";

   return 0;
}