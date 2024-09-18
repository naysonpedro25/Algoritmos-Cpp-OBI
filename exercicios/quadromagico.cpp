#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> q(n, vector<int>(n));
    for(int i =0; i < n; i++){
        for(int j= 0; j < n; j++){
            int v;
            cin >> v;
           q[i][j] = v;
        }
    }

    int dp =0, ds = 0;
    for(int i= 0; i < n; i++){
        dp += q[i][i];
        ds += q[i][n -1 -i];
    }

    if(dp != ds) {
        cout << -1 << endl;
        return 0;
    }


    bool ver = true;
    for(int i =0; i < n; i++){
        int lines =0;
        int columns =0;
        for(int j= 0; j < n; j++){
            lines += q[i][j];
            columns += q[j][i];
        }

        if(columns != dp || lines != dp){
            ver = false;
            break;
        }
    }

    if(ver) cout << dp <<endl;
    else cout << -1 << endl;





    return 0;
}
