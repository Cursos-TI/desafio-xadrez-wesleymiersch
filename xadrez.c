#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentobispo (int casas){
    if (casas >0){
        movimentobispo (casas-1);
        printf ("Bispo uma casa para cima a direita\n");
    }
}
void movimentotorre (int casas){
    if (casas > 0){
        movimentotorre (casas-1);
        printf ("Torre uma casa para cima\n");
    }
}
void movimentorainha (int casas){
    if (casas > 0){
        movimentorainha (casas-1);
        printf ("Rainha uma casa para a esquerda\n");
    }
}
void movimentocavalo (int casas){
    if (casas > 0){
        if (casas ==1) {
            printf (" Cavalo anda uma casa para direira \n");
        } else {
            printf (" Cavalo anda duas casas para cima \n");
        }
        movimentocavalo (casas-1);
    }
}
int main() {
    int torre=5, rainha=8, bispo =5, cavalo=3;
    
        printf ("Movimento BISPO \n");
        movimentobispo (bispo);
        printf ("\n");
    // Implementação de Movimentação da Torre
        printf (" Movimento TORRE\n");
        movimentotorre (torre);
        printf ("\n");
    // Implementação de Movimentação da Rainha
    printf (" Movimento Rainha\n");
    movimentorainha (rainha);
    printf ("\n");

    printf (" Movimento CAVALO \n");
    movimentocavalo (cavalo);
    return 0;
}
