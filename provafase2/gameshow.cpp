#include <iostream>
using namespace std;
// esuqerda = 2 * i; direita 2 * i + 1;
int main() {
    int salaInit = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char instrucao;
        cin >> instrucao;
        if(instrucao == 'E') {
            salaInit *= 2;
        }else if(instrucao == 'D') {
            salaInit = salaInit * 2 + 1;
        }else {
            return 0;
        }
    }

    cout << salaInit;

    return 0;
}