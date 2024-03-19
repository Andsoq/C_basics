#include <stdio.h>
int main(){ 
    float num1, num2, resultado;
    char escolha;
    printf("Digite o valor do primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o valor do segundo número: ");
    scanf("%f", &num2);
    printf("Qual operação você deseja realizar? + para soma, - para subtração, * para multiplicação e / para divisão\n");
    scanf( " %c", &escolha);
    switch (escolha){
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;              
        case '/':
            resultado = num1 / num2;
    }
    printf("Resultado da operação é: %.2f", resultado);
    return 0;
}