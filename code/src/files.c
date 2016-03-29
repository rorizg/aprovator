#include <sys/stat.h>
#include <errno.h>
#include <stdlib.h>

#include "../include/files.h"

UINT16 createFolder(char *name){
    UINT16 mkdirInfo = mkdir(name, S_IFDIR);

	UINT8 out;

	switch (mkdirInfo) {
        case 0:
        {
            /* Successful completion */
            out = ERR_FOLDER_OK;
        }
        case EACCES:
        {
            /* Write permission is denied for the parent directory in which the new directory is to be added */
            out = ERR_FOLDER_AD;
            break;
        }
        case EEXIST:
        {
            /* A file named filename already exists */
            out = ERR_FOLDER_OK;
            break;
        }
        case EMLINK:
        {
            /* The parent directory has too many links (entries) */
            out = ERR_FOLDER_AD;
            break;
        }
        case ENOSPC:
        {
            /* The file system doesn’t have enough room to create the new directory */
            out = ERR_FOLDER_TL;
            break;
        }
        case EROFS:
        {
            /* The parent directory of the directory being created is on a read-only file system and cannot be modified */
            out = ERR_FOLDER_AD;
            break;
        }
	}

	return out;
}

bool createFile(File *f, const char *filename){
    UINT8 i;

    /* copy file name */
    for(i = 0; i < MAX_FILENAME_LEN && filename[i] != '\0' ; i++){
        f->name[i] = filename[i];
    }

    /* create the file if not exists */
    FILE *tempFile = fopen(f->name, "w");
    /* verify if file exists */
    if(tempFile == NULL)
        return false;

    fclose(tempFile);

    return true;
}

UINT32 openFile(File *f, char **filedata){
    UINT32 charCount;

    FILE tempFile = fopen(f->name,"r");

    if(tempFile == NULL)
        return 0;

    &f->file = tempFile;

    char tempChar;
    /* Count number of characters in the file */
    for(charCount = 0; fscanf(file ,"%c",&tempChar) != EOF; charCount++);

    *filedata = (char*)malloc(charCount+1);

    freopen(filename, "r", file); /* reopen to restart to read */

    /* Copy data from file to the RAM*/
    for(charCount = 0; fscanf(file ,"%c", *filedata+charCount) != EOF; charCount++);

    return charCount;
}
