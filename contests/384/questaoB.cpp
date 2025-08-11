#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, R;
    cin >> N >> R;
    for (int i = 0 ; i < N ; i++){
        int D, A;
        cin >> D >> A;
        if (D == 1 && (R >= 1600 && R <= 2799)) R += A;
        else if (D == 2 && (R >= 1200 && R <= 2399)) R += A;
    }
    cout << R << endl;
    return 0;
}