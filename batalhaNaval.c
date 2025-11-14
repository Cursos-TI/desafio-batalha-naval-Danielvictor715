#include <stdio.h>

#define TAM 10       // Tamanho do tabuleiro (10x10)
#define NAVIO 3      // Valor usado para representar navio no tabuleiro
#define TAM_NAVIO 3  // Tamanho fixo dos navios

int main() {

    // -------------------------------
    // 1. DECLARAÇÃO DO TABULEIRO
    // -------------------------------
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com 0 (água)
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // -------------------------------
    // 2. DECLARAÇÃO DOS NAVIOS
    // -------------------------------
    int navioHorizontal[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navioVertical[TAM_NAVIO]   = {NAVIO, NAVIO, NAVIO};

    // Coordenadas iniciais definidas no código (como pedido)
    int linhaH = 2, colunaH = 3;  // Navio horizontal começa em (2,3)
    int linhaV = 5, colunaV = 6;  // Navio vertical começa em (5,6)

    // -------------------------------
    // 3.
