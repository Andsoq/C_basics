#include <stdio.h>
int main() {
    int num;
    printf("Digite um número e direi se ele é positivo, negativo ou zero: ");
    scanf("%d", &num);
    if (num > 0){
        printf("O número %d é positivo", num);
    }
    else if (num < 0){
        printf("O número %d é negativo", num);
    }
    else if (num == 0){
        printf("O número %d é zero", num);
    }
    return 0;
}