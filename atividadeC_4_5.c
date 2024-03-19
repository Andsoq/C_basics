#include <stdio.h>
int main() {
    int num, soma;
    soma = 0;
    printf("Digite um conjunto de números (use o 0 para terminar):\n");
    do{
        scanf("%d",&num);
        if(num %2 == 0 && num != 0){
        soma += num;
        }
    } while (num != 0);
    printf("A soma dos pares do seu conjunto é: %d\n",soma);
    return 0;
}