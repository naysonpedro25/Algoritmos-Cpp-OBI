#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;



int main(int argc, char *argv[]) {
    char times[] = {'A', 'B', 'C' ,'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};

    vector<char> fase2;

    for (int i = 0; i < 8; i+= 2) {
        int m,n;
        cin>>m>>n;
        if(m > n) fase2.push_back(times[i]);
        else fase2.push_back(times[i +1]);
    }
    vector<char> fase3; // 8 times

    for (int i = 0; i < 4; ++i) { // 4 jogos
        int m,n;
        cin>>m>>n;
        if(m > n) fase3.push_back(fase2[2 * i]);
        else fase3.push_back(fase2[2 * i +1]);
    }
    vector<char> fase4;
    for (int i = 0; i < 2; ++i) { // 2 jogos entre 4 times
        int m,n;
        cin>>m>>n;
        if(m > n) fase4.push_back(fase3[ 2* i]);
        else fase4.push_back(fase3[2 * i +1]);

    }
    char c;
    int m,n;
    cin>>m>>n;
    if(m > n) c = fase4[0];
    else c = fase4[1];

    cout<<c<<endl;


    /*
    *
    *     vector<char> times  = {'A', 'B', 'C' ,'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    vector<vector<char>> fases(5);
    fases[0] = times;

    for(int i = 1; i <=4; i++) { // 4 pq a derradeira é preenchina no loop 4 e só tem 1 elemento
        for (int j = 0; j < fases[i -1].size(); j+= 2) {
            int m,n;
            cin>>m>>n;
            if(m > n) fases[i].push_back(fases[i -1][j]);
            else fases[i].push_back(fases[i-1][j +1]);
        }
    }
    cout << fases[fases.size() -1][0]<<endl;

     */
}
