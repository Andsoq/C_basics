#include <stdio.h>
int main() {
    int num, i;
    printf("Digite um número e direi sua tabuada de 1 a 10: ");
    scanf("%d", &num);
    for (i = 1; i<=10;i++) {
        printf("%d x %d = %d\n",num, i, num *i);
    }  
    return 0;
}
