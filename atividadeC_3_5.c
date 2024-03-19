#include <stdio.h>
int main(){ 
    float distancia, custo, total;
    printf("Quantos km você deseja percorrer (em km)?\n");
    scanf("%f", &distancia);
    if (distancia <= 200){
        custo = 0.5;
        total = distancia * custo;
        printf("Sua viagem custará R$ %.2f", total);
    }
    else if (distancia > 200){
        custo = 0.45;
        total = distancia * custo;
        printf("Sua viagem custará R$ %.2f", total);
    }
    return 0;
}