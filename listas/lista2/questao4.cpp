#include <bits/stdc++.h>
using namespace std;

bool ehpalindromo(string x){
    string temp1 = "";
    string temp2 = "";
    for (int i = 0 ; i < x.size()/2 ; i++){
        temp1 += x[i];
    }
    for (int j = (x.size() % 2 == 0 ? x.size()/2 : x.size()/2 + 1) ; j < x.size() ; j++){
        temp2 += x[j];
    }
    reverse(temp2.begin(), temp2.end());
    if (temp1 == temp2) return true;
    else return false;
}

int main() {
    string s;
    cin >> s;
    string x = "0";
    x += s;
    string y = s;
    y += "0";
    string z = x;
    z += "0";
    if (ehpalindromo(s) || ehpalindromo(x)) cout << "Yes" << endl;
    else if (ehpalindromo(y) || ehpalindromo(z)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}