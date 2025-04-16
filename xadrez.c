#include <stdio.h>


// Função recursiva para o movimento da torre
void movimentoTorre(int n) {
    if (n > 0) {
        printf("Esquerda\n"); // Imprime a diração de movimento a cada casa
        movimentoTorre(n - 1); // Atualiza o valor de n
    }
}

// Função recursiva para o movimento do bispo
void movimentoBsipo() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Direita\n"); // Imprime a movimentação Horizontal
            printf("Cima\n"); // Imprime a movimentação Vertical
        }
    }
}
// Função recursiva para o movimento da Rainha
void movimentoRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n"); // Imprime a direção de movimento a cada casa
        movimentoRainha(n - 1); // Atualiza o valor de n
    }
}

// Função recursiva para o movimento do Cavalo
void movimentoCavalo() {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n"); // Imprime a movimentação da Vertical
        }
        for (int k = 0; k < 1; k++) {
            printf("Direita\n"); // Imprime a movimentação na Horinzontal
        }
    }
}
//Função Principal
int main(void) {

    int numTorre = 5;
    printf("Movimentos da torre:\n");
    movimentoTorre(numTorre);

    printf("\n");

    printf("Movimentos do bispo:\n");
    movimentoBsipo();

    printf("\n");

    int numRainha = 8;
    printf("Movimentos da rainha:\n");
    movimentoRainha(numRainha);

    printf("\n");

    printf("Movimentos do cavalo:\n");
    movimentoCavalo();


    return 0;

}