#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    while (cin >> x){
        for (int i = 0 ; i < x/2 + 1 ; ++i){
            for (int j = 0 ; j < (x-2*i)/2 ; ++j) cout << " ";
            for (int k = 0 ; k < 1 + 2*i ; ++k) cout << "*";
            cout << endl;
        }
        for (int l = 0 ; l < x/2 ; ++l) cout << " ";
        cout << "*";
        cout << endl;
        for (int h = 0 ; h < (x - 2)/2 ; ++ h) cout << " ";
        cout << "***";
        cout << endl << endl;
    }
    return 0;
}