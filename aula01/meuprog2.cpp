#include <string>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

void calculadora(int valor01, int valor02){

    cout << "Soma = " << valor01 + valor02  << "\n";
    cout << "Divisao = "<< valor01 / valor02 << "\n";
    cout << "Multiplicacao = "<< valor01 * valor02 << "\n";
    cout << "Subtracao = "<< valor01 - valor02 << "\n";
    cout << "Resto = "<< valor01 - valor02 << "\n";

}

int main(void){

    int numero1, numero2;
    cout << "Digite um valor:";
    cin >> numero1;
    cout << "Digite outro valor:";
    cin >> numero2;
    // cin >> valor02;

    calculadora(numero1, numero2);

    return 0;

}