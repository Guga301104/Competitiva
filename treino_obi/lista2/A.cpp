#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int N, P, M;
    cin >> N;
    
    int pequeno = 0, medio = 0;
    for (int i = 0; i < N; i++) {
        int T;
        cin >> T;
        if (T == 1) pequeno++;
        else medio++;
    }
    
    cin >> P >> M;
    
    if (pequeno <= P && medio <= M) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    
   return 0;
}