#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    getchar();


    string code;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        code.append(line);
    }

    int cont = 0;
    bool balanceada = true;
    for (char c: code) {
        if (c == '{') {
            cont++;
        } else if (c == '}') {
            if (cont == 0) {
                balanceada = false;
            }else {
                cont--;
            }

        }
    }


    if (balanceada && cont == 0) cout << "S" << endl;
    else cout << "N" << endl;
}
