#ifndef PROVA_H
#define PROVA_H

#include "../include/defs.h"

typedef struct{
	data dataProva;
	float notaAdquirida;
	float peso;
	UINT8 *conteudo;
} prova;

typedef struct{
	prova infoProva;

	prova *provaProx;
} ListaProva;

prova *criarProva(void);

void incluirProva(ListaProva *lista, prova *novaProva);

void excluirProva(ListaProva *lista, prova *novaProva);

#endif // PROVA_H
