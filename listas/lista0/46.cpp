#include <bits/stdc++.h>
using namespace std;
int main() {
    while (true){
        int x, y, tam;
        string res;
        cin >> x >> y;
        if (x == y && x == 0) break;
        res = to_string(x+y);
        res.erase(remove(res.begin(), res.end(), '0'), res.end());
        cout << res << endl;
    }
    return 0;
}