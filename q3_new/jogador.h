#include <stdio.h>

typedef struct{
    char nome[50];
    int jogos;
    int gols;
    int assistencias;
}jogador_time;

jogador_time* novo_jogador(char nome[],int jogos,int gols,int assistencias);
void mostra_jogador(jogador_time* jogador);
int bom_jogador(jogador_time* jogador);