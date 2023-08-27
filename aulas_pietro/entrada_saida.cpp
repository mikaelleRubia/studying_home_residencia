#include <stdio.h>


int main(){
    int valor01 = 0;
    int valor02 = 0;
    // int idade = 0;
    // int ano = 0;

    printf("Digite um valor inteiro:\n");
    scanf("%d", &valor01);
    printf("Digite um valor real:\n");
    scanf("%d", &valor02);
    printf("valores digitados: %d\n", valor01);
   printf("valores digitados: %d %d \n", valor01, valor02);


    // printf("Digite idade e ano:\n");
    // scanf("%d %d ", &idade, &ano);
 
    // printf("valor da idade: %d \n", idade);
    // printf("Ano: %d \n", ano);

    printf("valor real com 2 casa: %.2f  \n", 10.4567897456);
    printf("Dado de texto: %c  \n", 'a');
    printf("Dado de texto: %s \n", "teste");

 
}