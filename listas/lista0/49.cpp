#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        int c = 0;
        string x;
        cin >> x;
        for (int j = 0 ; j < 14 ; ++j){
            string y = "";
            while(j < x.length() && isdigit(x[j])){
                y += x[j];
                j += 1;
            }
            if (!y.empty()) c += stoi(y);
        }
        cout << c << endl;
    }
    return 0;
}