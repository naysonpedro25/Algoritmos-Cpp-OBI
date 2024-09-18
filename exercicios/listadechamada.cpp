#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
string v2[1000];
int main(int argc, char *argv[]) {
    int n, k;
    cin >> n >> k;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v2, v2);

    cout << v[k -1] << endl;
}
