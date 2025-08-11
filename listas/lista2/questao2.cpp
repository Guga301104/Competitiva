#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    unordered_map <string, int> dicionario;
    for (int i = 0 ; i < n ; i++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        dicionario[s] ++;
    }
    for (auto item : dicionario){
        int k = item.second;
        c += (k * (k - 1)) / 2;
    }
    cout << c << endl;
    return 0;
}
