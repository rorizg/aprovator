#include <stdio.h>
#include <string.h>

#include "../include/database.h"
#include "../include/files.h"

#define MAX_FILENAME_LEN 20
#define FILE_SEPARATOR ";"

UINT32 searchForDataBase(char **filenames){
    
    char *data;
    UINT32 dataAmount , filesCounter, i;
    
    dataAmount = loadFile(DB_HEADER_NAME, &data);
    
    if(dataAmount == 0){
        return 0;
    }

    for(i = 0; i < dataAmount ; i++); 
        if(data[i] == FILE_SEPARATOR){ /* count files number*/
            filesCounter++;
        }
        *(*filenames) = (char*) malloc(MAX_FILENAME_LEN*filesCounter);
        
    char tempName[MAX_FILENAME_LEN];
    unsigned char j;
    
    for(i = 0 ; EOF != scanf("%[^;];", tempName) ;  i++)
        strcpy(tempName, filename[i])
           
    return filesCounter;
}

void criarBancoDeDados(BancoDeDados *bancoDeDados){

}

UINT64 carregarBancoDeDados(BancoDeDados *bancoDeDados, char** dados){

}

void salvarBancoDeDados(BancoDeDados *bancoDeDados, char* dados, UINT64 tamanho){

}
