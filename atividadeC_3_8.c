#include <stdio.h>
int main(){ 
    float valor, salario, meses,prestacao,salario30;
    printf("Qual o valor da casa a comprar?\nR$: ");
    scanf("%f",&valor);
    printf("Qual o seu salário?\nR$: ");
    scanf("%f",&salario);
    printf("Quantos meses serão de pagamento?\n");
    scanf("%f",&meses);
    prestacao = valor/meses;
    salario30 = salario * 0.3;
 if(salario30 > prestacao){
    printf("Empréstimo liberado!\n%.2f é 30%% de seu salário e a prestação custa %.2f.",salario30,prestacao);
 }
else {
    printf("Empréstimo negado!\n%.2f é 30%% de seu salário e a prestação custa %.2f.",salario30,prestacao);
}
return 0;
}