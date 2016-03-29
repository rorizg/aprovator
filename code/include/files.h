#ifndef FILES_H
#define FILES_H

#include <stdio.h>

#include "../include/defs.h"

#define DB_HEADER_NAME "file.txt"

#define ERR_FOLDER_OK   0     /* Successfully created */
#define ERR_FOLDER_AD   1     /* Access denied error */
#define ERR_FOLDER_TL   2     /* File name too long */

#define MAX_FILENAME_LEN 20

typedef struct{
    char name[MAX_FILENAME_LEN];
    FILE file;
}File;

UINT16 createFolder(char* name);

void createFile(File *f);

UINT32 openFile(File *f, char **filedata);

bool saveFile(File *f, char *data, UINT32 length);

#endif // FILES_H
