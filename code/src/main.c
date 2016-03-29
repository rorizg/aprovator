#include "../include/disciplina.h"
#include "../include/database.h"

#include <stdio.h>

#include "../include/database.h"

void main(void){

/*
	char *filenames;
	UINT32 namesNumber, i;

	namesNumber = searchForDataBase(openFile(DB_HEADER_NAME), &filenames);
    printf("%i", namesNumber);

	for(i = 0 ; i < namesNumber ; i++){
        printf("%s", filenames[i]);
	}
*/

    char **filenames;
    UINT32 amount, i;

    amount = searchForDataBase(&filenames);

    for(i = 0 ; i < amount ; i++){
        printf("%s\n", filenames+i);
    }

}
