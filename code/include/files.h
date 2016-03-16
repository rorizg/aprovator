#ifndef FILES_H
#define FILES_H

#include <stdio.h>

#include "../include/defs.h"

#define DB_HEADER_NAME "file.txt"

#define ERR_FOLDER_OK   0     /* Successfully created */
#define ERR_FOLDER_AD   1     /* Access denied error */
#define ERR_FOLDER_TL   2     /* File name too long */

UINT16 createFolder(char* name);

UINT32 loadFile(const char *filename, char **filedata);

#endif // FILES_H
