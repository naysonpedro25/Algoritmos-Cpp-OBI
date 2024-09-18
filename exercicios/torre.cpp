#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n;
    cin >> n;
    vector<vector<int>> t(n, vector<int>(n,0));

    vector<int> somaLinas(n);
    vector<int> somaColunas(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t[i][j];
            somaLinas[i] += t[i][j];
            somaColunas[j] += t[i][j];
        }
    }
    int maxSoma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            maxSoma = max(maxSoma,somaLinas[i] + somaColunas[j] - 2 *t[i][j]);
        }
    }

    cout << maxSoma << endl;

}

