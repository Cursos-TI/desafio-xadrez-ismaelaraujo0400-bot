#include <stdio.h>

int main() {

    // ============================
    //   MOVIMENTO DA TORRE (for)
    // ============================
    int casasTorre = 5; // A torre deve andar 5 casas para a direita

    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // Torre anda em linha reta
    }


    // ============================
    //   MOVIMENTO DO BISPO (while)
    // ============================
    int casasBispo = 5; // Bispo deve andar 5 casas na diagonal "Cima Direita"
    int contadorBispo = 0;

    printf("\n=== Movimento do Bispo ===\n");
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Movimento diagonal
        contadorBispo++;
    }


    // ============================
    //   MOVIMENTO DA RAINHA (do-while)
    // ============================
    int casasRainha = 8; // Rainha deve andar 8 casas para a esquerda
    int contadorRainha = 0;

    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda\n"); // Rainha tem movimentos livres, aqui escolhido esquerda
        contadorRainha++;
    } while (contadorRainha < casasRainha);


    return 0;
}
