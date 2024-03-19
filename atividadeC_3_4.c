#include <stdio.h>
int main(){ 
    int idade;
    printf("Digite a idade de seu carro: ");
    scanf("%d", &idade);
    if (idade <= 3){
        printf("Seu carro é novo.");
    }
    else {
        printf("Seu carro é velho.");
    }
    return 0;
}
