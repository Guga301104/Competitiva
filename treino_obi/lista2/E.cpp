#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
    string s;
    cin >> s;

    string n = "CEUP";
    map<char,vector<int>> cartas;

    for (int i = 0 ; i < s.size() ; i += 3){
        int x = stoi(s.substr(i,2));
        cartas[s[i+2]].emplace_back(x);
    }

    for (auto c : n){
        sort(cartas[c].begin(), cartas[c].end());
        auto it = unique(cartas[c].begin(), cartas[c].end());
        bool dup = it != cartas[c].end();
        cout << (dup ? string("erro") : to_string(13 - (it - cartas[c].begin()))) << '\n';
    }
   return 0;
}