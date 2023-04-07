#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "time.h"
#include "jogador.c"

time_fut* novo_time(char nome[],jogador_time* jogadores[],int vitorias,int empates,int derrotas){
    time_fut* time=(time_fut*) malloc (sizeof(time_fut));
    int tamanho=strlen(nome);
    for(int i=0;i<tamanho;i++){
        time->nome[i]=nome[i];
        if(nome[i]=='\n'){
            break;
        }
    };
    memcpy(time->jogadores,jogadores,sizeof(jogador_time)*11);
    time->vitorias=vitorias;
    time->empates=empates;
    time->derrotas=derrotas;
    return time;
}

void listar_time(time_fut* time){
    printf("Nome: %s\n" , time->nome);
    printf("Jogadores:\n ");
    for(int i=0;i<11;i++)mostra_jogador(time->jogadores[i]);
    printf("Vitorias: %d \n ", time->vitorias);
    printf("Empates: %d \n ", time->empates);
    printf("Derrotas: %d \n ", time->derrotas);
}

int pontuacao(time_fut* time){
    return((time->vitorias)*3 + time->empates);
}