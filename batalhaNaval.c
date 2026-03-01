#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


// Constantes 
#define LINHAS 10
#define COLUNAS 10

int main() {

    // Batalha Naval - Nivel Aventureiro 
    // Matriz 10x10 que representa o tabuleiro (0 representa agua e 3 o navio)
    
    int tabuleiro[LINHAS][COLUNAS];
    int tamanhoNavio = 3;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- Posicionamento dos 4 Navios

    // Posicionamento do Navio na Horizontal
    for (int j = 0; j < tamanhoNavio; j++) {
        tabuleiro[1][1 + j] = 3;
    }

    // Posicionamento do Navio na Vertical
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[4 + i][8] = 3;

    }

    //Posicionamento dos Navios na Diagonal
    for (int k = 0; k < tamanhoNavio; k++) {
        tabuleiro[1 + k][7 + k] = 3;
    }

    //Posicionamento dos Navios na Diagonal
    for (int h = 0; h < tamanhoNavio; h++) {
        tabuleiro[6 + h][1 + h] = 3;
    }


    // Exibição do Tabuleiro 
    printf("--- Tabuleiro Batalha Naval --- \n\n");
    printf("    A B C D E F G H I J \n\n");
    
    for (int i = 0; i < LINHAS; i++) {
        
        printf("%2d  ", i + 1);

        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}
