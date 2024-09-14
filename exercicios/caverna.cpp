#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int itemAterior = 0;
    for (int i = 0; i < n; i++) {
        int normal = v[i];
        int reverso = m - v[i];
        if(itemAterior <= normal && itemAterior <= reverso) {
            
        }
    }

    return 0;
}
