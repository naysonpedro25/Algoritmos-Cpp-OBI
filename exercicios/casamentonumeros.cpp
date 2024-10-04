#include <iostream>

using namespace std;

const int maxn = 10e3;

void zeroesq(string &s, int dif) {
    string temp = "";
    temp.resize(dif, '0');
    s = temp + s;
}

int main() {
    string a, b;
    cin >> a >> b;
    if (a.length() > b.length()) zeroesq(b, a.length() - b.length());
    else zeroesq(a, b.length() - a.length());
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a.at(i) - '0' > b.at(i) - '0') {
            b.erase(i, 1);
        } else if (b.at(i) - '0' > a.at(i) - '0') {
            a.erase(i, 1);
        }
    }


    int intA;
    int intB;

    if (a.empty()) intA = -1;
    else intA = stoi(a);

    if (b.empty()) intB = -1;
    else intB = stoi(b);

    cout << (intA > intB ? intB : intA) << " " << (intA < intB ? intB : intA) << endl;
}
