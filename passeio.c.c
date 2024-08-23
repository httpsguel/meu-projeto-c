#include <stdio.h>

int main(void) {
    int clima, saude, dinheiro;

    printf("Digite 1 para clima ensolarado e 0 para outros: ");
    scanf("%d", &clima);

    printf("Digite 1 se voce estiver se sentindo bem e 0 se nao: ");
    scanf("%d", &saude);

    printf("Digite a quantidade de dinheiro que voce tem: ");
    scanf("%d", &dinheiro);

    if (clima < 0 || clima > 1 || saude < 0 || saude > 1 || dinheiro < 0) {
        printf("Entrada invalida! Verifique os valores digitados.\n");
    }
    else if (clima == 1 && saude == 1 && dinheiro >= 1000) {
        printf("EU VOU!\n");
    } 
    else {
        printf("NAO VOU!\n");
    }

    return 0;
}
