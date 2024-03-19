#include <stdio.h>
int main(){ 
    float salario, aumento;
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    if (salario > 1250){
        salario = salario * 1.15;
        printf("Seu salário sofreu um aumento de 15%% ,totalizando R$ %.2f", salario);
    }
    else if (salario <= 1250){
        salario = salario * 1.25;
        printf("Seu salário sofreu um aumento de 25%%, totalizando R$ %.2f", salario);
    }
    return 0;
}