#include <stdio.h>
int main() {
    int num, soma, i;
    soma = 0;
    i = 1;
    printf("Digite um número e mostrarei a soma de seus divisores: ");
    scanf("%d",&num);
    for(i; i < num; i++){
        if (num % i == 0) {
            soma += i;
        }
    }
    printf("A soma dos divisores de %d é: %d\n", num, soma);
    return 0;
}