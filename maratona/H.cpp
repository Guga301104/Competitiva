#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    string linha;
    getline(cin, linha);
    stringstream ss(linha);
    vector<int> num;
    while (ss >> a){
        num.push_back(a);
    }
    int maior = *max_element(num.begin(), num.end());
    vector<int> ind (maior + 2, 0);
    for (int i = 0 ; i < num.size() ; i ++){
        ind[num[i]] ++;
    }
    for (int j = 0 ; j < maior + 1 ; j ++){
        if (ind[j] > 0) cout << j << " " << ind[j] << endl;
    }
    return 0;
}