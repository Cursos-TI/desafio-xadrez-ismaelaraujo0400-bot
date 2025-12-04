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
        printf("Esquerda\n"); // Rainha andando para a esquerda
        contadorRainha++;
    } while (contadorRainha < casasRainha);


    // ============================
    //   MOVIMENTO DO CAVALO
    //   (loops aninhados: for + while)
    // ============================

    // O Cavalo deve andar: 2 casas para baixo + 1 casa para a esquerda
    int movimentoVertical = 2; // duas casas
    int movimentoHorizontal = 1; // uma casa

    printf("\n=== Movimento do Cavalo ===\n");

    // Primeiro movimento: DUAS casas para BAIXO
    // O loop externo é o for (obrigatório)
    for (int i = 0; i < movimentoVertical; i++) {

        // Loop interno usando WHILE (aninhado ao for)
        int repetir = 1; 
        while (repetir > 0) {
            printf("Baixo\n");
            repetir--; 
        }
    }

    // Movimento final: UMA casa para a ESQUERDA
    // Novamente usando while apenas para manter o padrão do exercício
    int contadorEsquerda = 0;
    while (contadorEsquerda < movimentoHorizontal) {
        printf("Esquerda\n");
        contadorEsquerda++;
    }

    return 0;
}
