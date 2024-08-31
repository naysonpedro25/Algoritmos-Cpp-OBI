#include <iostream>

using namespace std;
int casos(int valor){
    if(valor <= 3) return 1;
    else if(valor == 4) return 2;
    else return 3;
}
int main(){
    int distancia_inicial = 3;
    int volta = 8;
    int valor;
    cin >> valor;
    valor -= distancia_inicial;
    if(valor < volta){
        cout << casos(valor) << endl;
    }else{
        int resto = valor % volta;
        cout << casos(resto);
    }
    return 0;


}
