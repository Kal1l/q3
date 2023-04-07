#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogador.h"

jogador_time* novo_jogador(char nome[],int jogos,int gols,int assistencias){
    jogador_time* jogador=(jogador_time*) malloc (sizeof(jogador_time));
    int tamanho=strlen(nome);
    for(int i=0;i<tamanho;i++){
        jogador->nome[i]=nome[i];
        if(nome[i]=='\n'){
            break;
        }
    }
    jogador->jogos=jogos;
    jogador->gols=gols;
    jogador->assistencias=assistencias;
    return jogador;
}

void mostra_jogador(jogador_time* jogador){
    printf("Nome: %s\n ",jogador->nome);
    printf("Jogos: %d\n ",jogador->jogos);
    printf("Gols: %d\n ",jogador->gols);
    printf("Assistencias: %d\n", jogador->assistencias);
    printf("----------------------------------------------------------------");
}

int bom_jogador(jogador_time* jogador){
    return(jogador->gols + jogador-> assistencias >= 20 && jogador->jogos <= jogador->gols + jogador-> assistencias);
}
