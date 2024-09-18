#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        s.insert(p);
    }
    int test ;
    while (cin >> test) {
        if(s.find(test) != s.end()) {
            cout << "sim" << endl;
        }else {
            cout << "nao" << endl;
        }
    }
    return 0;
}