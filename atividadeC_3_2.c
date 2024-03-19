#include <stdio.h>
int main(){ 
    int num1,num2,num3;
    printf("Digite o 1° número: ");
    scanf("%d", &num1);
    printf("Digite o 2° número: ");
    scanf("%d", &num2);
    printf("Digite o 3° número: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3){
        printf("O número %d é o maior", num1);
    }
    else if (num2 > num1 && num2 > num3){
        printf("O número %d é o maior", num2);
    }
    else if (num3 > num1 && num3 > num2){
        printf("O número %d é o maior", num3);
    }
    if (num1 < num2 && num1 < num3){
        printf("\nO número %d é o menor",num1);
    }
    else if (num2 < num1 && num2 < num3){
        printf("\nO número %d é o menor", num2);
    }
    else if (num3 < num1 && num3 < num1){
        printf("\nO número %d é o menor", num3);
    }
    return 0;
}