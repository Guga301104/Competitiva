#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> num(4);
    for (int i=0 ; i<4 ; i++){
        int a;
        cin >> a;
        num[i] = a;
    }
    sort(num.begin(), num.end());
    if (((num[0] + num[1]) >= num[2]) || ((num[1] + num[2]) >= num[3])) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}