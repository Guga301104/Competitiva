#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    char c1, c2;
    string S;
    cin >> n >> c1 >> c2;
    cin >> S;
    for (int i = 0 ; i < n ; i++){
        if (S[i] != c1) S[i] = c2;
    }
    cout << S << endl;
    return 0;
}