#include <stdio.h>
int main(){ 
    float multa, vel, vel_limite;
    printf("Digite a velocidade que seu carro estava: ");
    scanf("%f", &vel);
    if (vel > 80){  
        vel_limite = vel - 80;
        multa = vel_limite * 105;
        printf("Você excedeu o limite, multa de R$: %.2f",multa);
    }
    else {
        printf("Você está de boa!");
    }
    return 0;
}