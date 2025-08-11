#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> tam;
    int n, x, y, res, c = 1;
    cin >> n;
    cin >> x;
    for (int i = 1 ; i < n ; ++i){
        cin >> y;
        if (y == x){
            c += 1;
        }else{
            tam.push_back(c);
            x = y;
            c = 1;
        }
    }
    tam.push_back(c);
    res = *max_element(tam.begin(), tam.end());
    cout << res << endl;
    return 0;
}