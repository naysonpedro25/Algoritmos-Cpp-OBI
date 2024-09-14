#include <bits/stdc++.h>
using namespace std;
const int MAX = 300;
int v[MAX];

int main() {
    int n;
    cin >> n;
    int resp = 0;

    while (n > 0) {
        int vall = n;
        int digito_max = 0;
        while (vall > 0) {
            int digito = vall % 10;
            digito_max = max(digito_max, digito);
            vall /= 10;
        }
        n -= digito_max;
        resp ++;
    }

    cout << resp << endl;

    return 0;

    /*
    *     int n;
    cin >> n;


    int res  = 0;
    while (n > 0) {
        int maxV =  0;
        string num = to_string(n);
        for (char c : num) {
            maxV = max(maxV, c - '0');
        }
        n -= maxV;
        res++;

    }
    cout << res << endl;
     */
}

// 23
