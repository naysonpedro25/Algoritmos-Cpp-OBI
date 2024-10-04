#include <iostream>
#include <math.h>
using namespace std;
const int MAXN = 100010;
int dp[MAXN];
bool mark[MAXN];



int main() {

    int n;
    cin >> n;
    int nenhum = pow((n -2), 3);
    int souma = pow((n -2), 2) * 6;
    int dois = pow(n, 3) - nenhum - souma - 8;
    int tres = 8;

    cout << nenhum << endl;
    cout << souma << endl;
    cout << dois << endl;
    cout << tres << endl;
    return 0;
}