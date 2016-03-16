#ifndef DATABASE_H
#define DATABASE_H

#include <stdio.h>

#include "../include/defs.h"

typedef struct{
	char *nome;
} BancoDeDados;

UINT32 searchForDataBase(char **filenames);

void criarBancoDeDados(BancoDeDados *bancoDeDados);

UINT64 carregarBancoDeDados(BancoDeDados *bancoDeDados, char** dados);

void salvarBancoDeDados(BancoDeDados *bancoDeDados, char* dados, UINT64 tamanho);

#endif // DATABASE_H
