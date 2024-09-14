#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    //
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int res =0;

    //9 5 5 5 9 5
    // 5 5 5 5 9 9

    // 5 + 5 = 10;
    // indexValorBla =5
    // j = 1;
    int indexValorIgaulOuMaior = lower_bound(v.begin(), v.end(), 10) - v.begin() - 1; // quando n se tem um valor maior ou igual dentro do array ele
    // retorna o a diferença entre o a posição fora do vetor  e o primeiro indice indice do primeiro elemento do array;
    cout << indexValorIgaulOuMaior << endl;
    // quando se faz subtrações ou adição e 
    for (int i = 0; i < n; ++i)  {
        for (int j = i + 1; j < n -1; ++j) {
            int soma = v[i] + v[j];
            int indexValorIgaulOuMaior = lower_bound(v.begin(), v.end(), soma) - v.begin() -1 ; // retorna o index do elemento anterior ao  elemento igaul o de maior valor que soma
            // resta saber se no intervalo de ]j, meuInex [ ,indexValorIgaulOuMaior [ tem numeros q forma um triangulo valido
            if (indexValorIgaulOuMaior > j) { // verifica se existe elementos dentro do intervalo
                // se existir valores no intervalo ent é somado na resp a quantidade de elementos dentro do intervalo
                res += indexValorIgaulOuMaior - j;
            }
        }
    }

    cout << res << endl;

    return 0;
}