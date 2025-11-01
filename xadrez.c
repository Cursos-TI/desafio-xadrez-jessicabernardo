#include <stdio.h>

int main() {
   
    int casasTorre = 5;
    printf("Movimento da Torre (para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo (diagonal cima-direita):\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha (para a esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}