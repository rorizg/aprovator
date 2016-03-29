#include <stdio.h>
#include <string.h>

#include "../include/database.h"
#include "../include/files.h"

#define FILE_SEPARATOR_CHAR ';'
#define FILE_SEPARATOR_STRING ";"

UINT32 searchForDataBase(char **filenames){

    char *data;
    UINT32 dataAmount, i;

    File dbFile;
    dbFile.name = {DB_HEADER_NAME};

    dataAmount = openFile(&dbFile, &data);

    if(dataAmount == 0){
        return 0;
    }

    UINT32 filesCounter = 0;

    for(i = 0; i < dataAmount ; i++){
        if(data[i] == FILE_SEPARATOR_CHAR){ /* count files number*/
            filesCounter++;
        }
    }

    *filenames = (char*) malloc(MAX_FILENAME_LEN*filesCounter);

    char tempName[MAX_FILENAME_LEN];

    for(i = 0; i < filesCounter ; i++){
        sscanf(data+MAX_FILENAME_LEN*i, "%s", tempName);

        strcpy((*filenames)[MAX_FILENAME_LEN*i], tempName);
        printf("%s\n", tempName);
    }

    return filesCounter;
}

void criarBancoDeDados(BancoDeDados *bancoDeDados){

}

UINT64 carregarBancoDeDados(BancoDeDados *bancoDeDados, char** dados){

}

void salvarBancoDeDados(BancoDeDados *bancoDeDados, char* dados, UINT64 tamanho){

}
