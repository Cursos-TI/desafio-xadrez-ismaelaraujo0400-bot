#include <stdio.h>

/*
    =======================================================
        FUNÇÕES RECURSIVAS — TORRE, BISPO, RAINHA
    =======================================================
*/

// ---------------- TORRE (recursiva) ----------------
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base

    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}


// ---------------- BISPO (recursiva + loops aninhados) ----------------
void moverBispo(int casas) {
    if (casas == 0) return; // Caso base da recursão

    // Loops aninhados para representar movimento diagonal:
    // Loop externo → CIMA
    // Loop interno → DIREITA
    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1); // Chamada recursiva
}


// ---------------- RAINHA (recursiva) ----------------
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1); // Recursão
}


/*
    =======================================================
         MOVIMENTO DO CAVALO — LOOPS COMPLEXOS
    =======================================================
    Movimento solicitado:
        → 2 casas para CIMA
        → 1 casa para DIREITA
    Utilizando loops aninhados, múltiplas variáveis,
    break e continue.
*/
void moverCavalo() {

    int movimentosVertical = 2;
    int movimentosHorizontal = 1;

    printf("=== Movimento do Cavalo ===\n");

    // Loop externo controla o movimento VERTICAL
    for (int i = 0, passo = 1; i < movimentosVertical; i++, passo++) {

        // Condição apenas para demonstrar continue
        if (passo == 0) {
            continue; // Nunca será verdade, mas mostra o uso permitido
        }

        // Loop interno apenas para uso da estrutura exigida
        for (int controle = 0; controle < 2; controle++) {

            if (controle == 1) {
                // Não repetir desnecessariamente
                break; 
            }

            printf("Cima\n");
        }
    }

    // Agora movimento HORIZONTAL → direita
    int contador = 0;

    while (contador < movimentosHorizontal) {

        if (contador < 0) {
            // Exemplo simbólico de continue
            continue;
        }

        printf("Direita\n");
        contador++;
    }
}


/*
    =======================================================
                    FUNÇÃO PRINCIPAL
    =======================================================
*/

int main() {

    printf("=== Movimento da Torre ===\n");
    moverTorre(5); // Torre anda 5 casas para a direita

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(5); // 5 casas na diagonal "Cima Direita"

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(8); // Rainha anda 8 casas para a esquerda

    printf("\n");
    moverCavalo(); // Cavalo — loops complexos

    return 0;
}
