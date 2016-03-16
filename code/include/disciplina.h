#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include "../include/defs.h"

#include "../include/basico.h"
#include "../include/prova.h"

typedef struct{
	UINT8 *nomeDisciplina;
	UINT8 *nomeProfessor;

	ListaProva *listaProvas;

	struct prioridade{
        UINT8 inicial;
        float consecutiva;
	};
} disciplina;

typedef struct{
	disciplina infoDisciplina;

	disciplina *disciplinaProx;
} listaDisciplina;

disciplina *criarDisciplina(void);

void incluirDisciplina(listaDisciplina *lista, disciplina *novaDisciplina);

void excluirDiscplina(listaDisciplina *lista, disciplina *novaDisciplina);

#endif // DISCIPLINA_H


