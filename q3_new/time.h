#ifndef TIME_H
#define TIME_H
#include <stdio.h>
#include "jogador.h"

typedef struct{
    char nome[50];
    jogador_time jogadores[11];
    int vitorias;
    int empates;
    int derrotas;
}time_fut;

time_fut* novo_time(char nome[],jogador_time jogadores[],int vitorias,int empates,int derrotas);
void mostra_time(time_fut* time);
int pontuacao(time_fut* time);

#endif