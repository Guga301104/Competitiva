#include <bits/stdc++.h>
using namespace std;

int fat(int n){
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n * fat(n-1);
}

int main() {
    while (true){
        string s;
        cin >> s;
        string salva = s;
        vector<int> letras(s.length(), 1);
        long long int x = fat(s.length()), c = 1;
        if (s == "#") break;
        for (int i = 0 ; i < s.length() - 1 ; i++){
            for (int j = i+1 ; j < s.length() ; j++){
                if (s[i] == s[j]){
                    letras[i] += 1;
                    break;
                }
            }
        }
        for (int k = 0 ; k < s.length() ; k++){
            x /= fat(letras[k]);
        }
        sort(s.begin(), s.end());
        for (int k = 0 ; k < x ; k++){
            if (s == salva) break;
            next_permutation(s.begin(), s.end());
            c += 1;
        }
        cout << c << endl;
    }
    return 0;
}