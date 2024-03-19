#include <stdio.h>
int main(){ 
    char escolha;
    printf("Digite um de nossos produtos e direi sua categoria e preço. Opções disponíveis: Manga, Banana, Pêra, Goiaba, Uva \n");
    scanf(" %c", &escolha);
    switch (escolha){ 
        case 'M':
        case 'm':
            printf("Produto: Manga\nCategoria: I\nPreço:R$ 10.00");
            break;
        case 'B':
        case 'b':
            printf("Produto: Banana\nCategoria: II\nPreço:R$ 15.00");
            break;
        case 'P':
        case 'p':
            printf("Produto: Pêra\nCategoria: III\nPreço:R$ 19.00");
            break;
        case 'G':
        case 'g':
            printf("Produto: Goiaba\nCategoria: IV\nPreço:R$ 23.00");
            break;
        case 'U':
        case 'u':
            printf("Produto: Uva\nCategoria: V\nPreço:R$ 27.00");
            break;
        default:
            printf("Não consegui achar o produto.");
    }
    return 0;
}