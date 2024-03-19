#include <stdio.h>
int main() {
    int numero, menor, maior;
    // Leitura do primeiro número
    printf("Digite uma sequência de números (0 para sair): ");
    // Inicializando menor e maior com o primeiro número
    // menor = maior = numero; (REDUNDANTE)
    // Loop para continuar lendo números
    do {
        scanf("%d", &numero);
        // Atualizando menor e maior, se necessário
        if (numero != 0) {
            if (menor == 0) {
                menor = numero;
            }
            if (numero < menor)
                menor = numero;
            else if (numero > maior)
                maior = numero;
        }
    } while (numero != 0);
    // Exibindo o menor e o maior número
    printf("O menor numero digitado foi: %d\n", menor);
    printf("O maior numero digitado foi: %d\n", maior);
    return 0;
}