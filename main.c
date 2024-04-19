/******************************************************************************

Crie um programa que imprime a tabuada de um número qualquer digitado pelo usuário.

*******************************************************************************/
#include <stdio.h>


int main() {
    int num;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &num);

    int i = 1;

    printf("Tabuada do %d:\n", num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++; 
    }

    return 0; 
}


