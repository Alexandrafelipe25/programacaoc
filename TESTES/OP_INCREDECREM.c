#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    //numero1 = numero 1 + 1;
    //numero1 += 1;
    printf("Antes incremento %d\n", numero1);
    resultado = numero1++;
    //Pos-incremento:
    //Resultado = numero1
    //numero++
    printf("Após Pós-incremento - Número 1: %d - Resultado %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após Pré-incremento - Número 1: %d - Resultado %d\n", numero1, resultado);


    resultado = numero1--;
    printf("Após Pós-decremento - Número 1: %d - Resultado %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após Pré-decremento - Número 1: %d - Resultado %d\n", numero1, resultado);



    //numero1 = numero 1 - 1;
    //numero1 -= 1;
    printf("Antes decremento %d\n", numero1);
    numero1--;
    printf("Após decremento %d\n", numero1);




}