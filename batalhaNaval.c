#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


// Constantes 
#define LINHAS 10
#define COLUNAS 10

int main() {
    // Nível Novato 
    
    // Matriz 10x10 que representa o tabuleiro (0 representa agua e 3 o navio)
    
    int tabuleiro[LINHAS][COLUNAS];
    int tamanhoNavio = 3;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Cordenadas iniciais
    int navioH_linha = 2, navioH_coluna = 4;
    int navioV_linha = 5, navioV_coluna = 7;

    // Posicionamento do Navio Horizontal
    for (int j = 0; j < tamanhoNavio; j++) {
        tabuleiro[navioH_linha][navioH_coluna + j] = 3;
    }

    // Posicionamento do Navio Vertical
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[navioV_linha + i][navioV_coluna] = 3;

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


    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
