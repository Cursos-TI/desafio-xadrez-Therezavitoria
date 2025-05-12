#include <stdio.h>

// Função recursiva para o movimento da Torre (horizontal)
void movimentoTorre(int casas, int contador) {
    if (contador > casas) return;
    printf("Direita\n");
    movimentoTorre(casas, contador + 1);
}

// Função recursiva para o movimento do Bispo (diagonal)
void movimentoBispo(int casas, int contadorVertical, int contadorHorizontal) {
    if (contadorVertical > casas) return;
    printf("Cima Direita\n");
    movimentoBispo(casas, contadorVertical + 1, contadorHorizontal + 1);
}

// Função recursiva para o movimento da Rainha (horizontal)
void movimentoRainha(int casas, int contador) {
    if (contador > casas) return;
    printf("Esquerda\n");
    movimentoRainha(casas, contador + 1);
}

// Função para o movimento do Cavalo usando loops aninhados
void movimentoCavalo() {
    // O Cavalo se move para cima 2 casas e à direita 1 casa
    int casasVerticais = 2;
    int casasHorizontais = 1;
    
    for (int i = 1; i <= casasVerticais; i++) {
        printf("Cima\n");
    }

    // Loop interno para o movimento horizontal (direita)
    for (int j = 1; j <= casasHorizontais; j++) {
        printf("Direita\n");
    }
}

int main() {
    // ===============================
    // Movimento da TORRE (Recursivo)
    // ===============================
    printf("Movimento da Torre:\n");
    movimentoTorre(5, 1); // 5 casas para a direita
    printf("\n");

    // ===============================
    // Movimento do BISPO (Recursivo + Loops Aninhados)
    // ===============================
    printf("Movimento do Bispo:\n");
    movimentoBispo(5, 1, 1); // 5 casas na diagonal
    printf("\n");

    // ===============================
    // Movimento da RAINHA (Recursivo)
    // ===============================
    printf("Movimento da Rainha:\n");
    movimentoRainha(8, 1); // 8 casas para a esquerda
    printf("\n");

    // ===============================
    // Movimento do CAVALO (Loops Aninhados)
    // ===============================
    printf("Movimento do Cavalo:\n");
    movimentoCavalo(); // Duas casas para cima e uma para a direita
    printf("\n");

    return 0;
}
