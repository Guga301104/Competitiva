#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; ++i){
        string x;
        cin >> x;
        if ((x[0] == 'o' && x[1] == 'n') || (x[0] == 'o' && x[2] == 'e') || (x[1] == 'n' && x[2] == 'e')) cout << "1" << endl;
        else if ((x[0] == 't' && x[1] == 'w') || (x[0] == 't' && x[2] == 'o') || (x[1] == 'w' && x[2] == 'o')) cout << "2" << endl;
        else if ((x[0] == 't' && x[1] == 'h' && x[2] == 'r') || (x[0] == 't' && x[1] == 'h' && x[3] == 'e' && x[4] == 'e') || (x[0] == 't' && x[2] == 'r' && x[3] == 'e' && x[4] == 'e') || (x[1] == 'h' && x[2] == 'r' && x[3] == 'e' && x[4] == 'e')) cout << "3" << endl;
    }
    return 0;
}