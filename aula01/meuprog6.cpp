#include <string>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

void calculadora(float valor01, float valor02){

    float result_mul = valor01 * valor02;
    float result_div = valor01 / valor02;
    float result_soma = valor01 + valor02;
    float result_sub = valor01 - valor02;
    cout << "Soma = " << result_soma  << "\n";
    cout << "Divisao ="<< result_div << "\n";
    cout << "Multiplicacao = "<< result_mul << " \n";
    cout << "Subtracao = "<< result_sub << "\n";
    cout << "Resto = "<< result_sub << "\n";

}

int main(void){

    float numero1, numero2;
    cout << "Digite um valori:";
    cin >> numero1;
    cout << "Digite outro valor:";
    cin >> numero2;


    calculadora(numero1, numero2);

    return 0;

}