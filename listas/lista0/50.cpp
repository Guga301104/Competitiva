#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; ++i){
        int k;
        cin >> k;
        string x, y;
        cin >> x;
        for (int j = 1 ; j < k ; ++j){
            cin >> y;
            if (x != y) x = "ingles";
        }
        cout << x << endl;
    }
    return 0;
}