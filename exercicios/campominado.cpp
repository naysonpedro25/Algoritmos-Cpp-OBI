#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vetor(n);
    vector<int> res(n, 0); // Inicialize res com zeros
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < n; i++) {
        if(i == 0) {
            if(vetor[i] ==1 ) res[i] += 1;
            if( vetor[i +1] == 1) res[i] += 1;
            continue;
        }

        if(i == n - 1) {
            if(vetor[i] ==1 ) res[i] += 1;
            if( vetor[i -1] == 1) res[i] += 1;
            continue;
        }

        if(vetor[i] ==1 ) res[i] += 1;
        if( vetor[i - 1] == 1) res[i] += 1;
        if( vetor[i +1] == 1) res[i] += 1;
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << endl;
    }

    return 0;

    /*
     *O JEITO MAIS FÁCIL

    #include <iostream>

using namespace std;

int campo[55]; // declaro meu vetor com 55 posições/

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> campo[i]; // nesse problema vou da posição 1 até a N
  }
  for (int i = 1; i <= n; i++) {
    cout << campo[i - 1] + campo[i] + campo[i + 1] << "\n";
  }
}
     *
     */
}
