#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int registrarTipoComprado[110]; // é preenchido com 0s
int main() {
    int r, n;
    cin >> r >> n;

    pmr::vector<pair<int, int>> tabela;
    for (int i = 0; i < n; i++) {
        int t,p;
        cin >> t >> p;
        tabela.push_back({p,t});

    }
    sort(tabela.begin(), tabela.end());
    int resp = 0;
    for (int i = 0; i < tabela.size(); i++) {
        int t  = tabela[i].first;
        int p = tabela[i].second;
        if(registrarTipoComprado[t] == 0 && p <= r) {
            resp++;
            registrarTipoComprado[t] = 1;
            r -=p;
        }
    }
    cout << resp << endl;

}