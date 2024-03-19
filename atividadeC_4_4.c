#include <stdio.h>
int main() {
    float media,nota,soma;
    int quanti,i;
    quanti = 7;
    printf("Digite as %d notas\n", quanti);
    
    for (i = 1; i <= 7; i++)
    {
        printf("Digite a %d nota: ",i);
        scanf("%f",&nota);
        soma += nota;
    }
    media = soma/quanti;
    printf("A média é de %.2f", media);
}
