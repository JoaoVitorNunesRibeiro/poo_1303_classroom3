#include <iostream>
using namespace std;
//deu a inform��o do numero que vai ser contado na repeti��o
int main() {
    int num, i = 1;
    //interface para o usuario dar o numero inteiro
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    //a repeti��o
    while (i <= num) {
        cout << i << " ";
        i++;
    }
    return 0;
}
