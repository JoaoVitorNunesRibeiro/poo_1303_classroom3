#include <iostream>
using namespace std;

//inicio de um código
int main() {
    //elementos da resposta que quero
    float base, altura, area;
    
    //digitar a primeira variavel
    cout << "digite a base do retangulo: ";
    cin >> base;
    //digitar a segunda variavel
    cout << "digite a altura do retangulo: ";
    cin >> altura;
    
    //formula da conta
    area = (base * altura);
    
    //resposta da conta
    cout << "a area do retangulo eh:" << area << endl;

    return 0;
}