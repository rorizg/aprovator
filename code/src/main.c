#include "../include/disciplina.h"
#include "../include/database.h"

#include <stdio.h>

#include "../include/files.h"

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
    char *data;
    UINT32 count, i;

    count = loadFile(DB_HEADER_NAME, &data);

    for(i = 0; i < count; i++){
    printf("%c", data[i]);
    }


}
