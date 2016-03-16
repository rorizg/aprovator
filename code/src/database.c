#include <stdio.h>
#include <string.h>

#include "../include/database.h"

#define MAX_FILENAME_LEN 20

UINT32 searchForDataBase(FILE *dbHeader,char **filenames){
    UINT32 lineCounter;
    char tempChar[MAX_FILENAME_LEN];

    for(lineCounter = 0 ; fscanf(dbHeader, "%[^;];", tempChar) != EOF ; lineCounter++){
    }

    *filenames = (char*)malloc((MAX_FILENAME_LEN*lineCounter) * sizeof(char));

    if(*filenames == NULL){
        return 0;
    }

    fclose(dbHeader);

    for(lineCounter = 0 ; fscanf(dbHeader, "%[^;];", *filenames+lineCounter) != EOF ; lineCounter++){
            printf("%s\n", *(*filenames+lineCounter));
    }

    return lineCounter;
}

void criarBancoDeDados(BancoDeDados *bancoDeDados){

}

UINT64 carregarBancoDeDados(BancoDeDados *bancoDeDados, char** dados){

}

void salvarBancoDeDados(BancoDeDados *bancoDeDados, char* dados, UINT64 tamanho){

}
