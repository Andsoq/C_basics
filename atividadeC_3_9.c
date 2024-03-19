#include <stdio.h>
#include <ctype.h>
int main(){ 
    float consumo,preço,valor;
    char tipo_ins;
    printf("Digite o valor de seu consumo de kWH:\n");
    scanf("%f",&consumo);
    printf("Digite o tipo de instalação (R - Residencial, I - Industrial, C - Comércios)\n");
    scanf(" %c",&tipo_ins);
    tipo_ins = tolower(tipo_ins);
    switch (tipo_ins){
    case 'r':
        if (consumo < 500){
            preço = 0.4; 
            valor = consumo * preço;
            printf("O valor a se pagar é de R$: %.2f",valor);
        }
        else{
            preço = 0.65;
            valor = consumo * preço;
            printf("O Valor a se pagar é de R$: %.2f",valor);
        }
        break;
    case 'c':
        if (consumo < 1000){
            preço = 0.55; 
            valor = consumo * preço;
            printf("O valor a se pagar é de R$: %.2f",valor);
        }
        else{
            preço = 0.60;
            valor = consumo * preço;
            printf("O Valor a se pagar é de R$: %.2f",valor);
        }
        break;
    case 'i':
        if (consumo < 5000){
            preço = 0.55; 
            valor = consumo * preço;
            printf("O valor a se pagar é de R$: %.2f",valor);
        }
        else{
            preço = 0.60;
            valor = consumo * preço;
            printf("O Valor a se pagar é de R$: %.2f",valor);
        }
        break;  
    }
return 0;
}