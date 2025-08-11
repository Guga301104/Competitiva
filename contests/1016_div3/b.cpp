#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        int c = 0;
        if (s.size() == 1){
            cout << "0\n";
            continue;
        }
        for (int i = s.size()-1 ; i >= 0 ; --i){
            if(s[i] == '0'){
                c++;
                s = s.substr(0, i);
            } else break;
        }
        for (int j = 0 ; j < s.size() ; ++j){
            if (s[j] != '0') c++;
        }
        cout << c-1 << "\n";
    }
    return 0;
}