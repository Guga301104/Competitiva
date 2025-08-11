#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<int, char>> pares (5);
    pares.push_back({0, 'A'});
    pares.push_back({0, 'B'});
    pares.push_back({0, 'C'});
    pares.push_back({0, 'D'});
    pares.push_back({0, 'E'});
    for (int i = 0 ; i < 5 ; i++){
        int x;
        cin >> x;
        pares[i].first += x; 
    }
    sort(pares.begin(), pares.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
    return a.first < b.first;
    });

    for (int j = 0 ; j < 5 ; j++){
        cout << pares[j].first;
        cout << endl;
    }
    cout << endl;
    return 0;
}