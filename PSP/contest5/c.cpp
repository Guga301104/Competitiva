#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

bool ehPalindromo (string s){
    int n = s.size();
    for (int i = 0 ; i < n/2 ; i++){
        if (s[i] != s[n-1-i]) return false;
    }
    return true;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   int cont_A_f = 0;
   int cont_A_i = 0;
   while(cont_A_i < s.size() && s[cont_A_i] == 'a'){
    cont_A_i ++;
   }
   int index = s.size() - 1;
   while(index >= 0 && s[index] == 'a'){
    cont_A_f ++;
    index --;
   }
   
   if (cont_A_i > cont_A_f){
    cout << "No\n";
    return 0;
   }

   int faltam = cont_A_f - cont_A_i;
   string x(faltam, 'a');
   x += s;
   if (ehPalindromo(x)) cout << "Yes\n";
   else cout << "No\n";
   return 0;
}