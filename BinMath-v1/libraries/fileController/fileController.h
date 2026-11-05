#ifndef FILECONTROLER_H
#define FILECONTROLER_H

int appsFolderCheck(void);
int directorySearcher(const char* pathFol);
int direcListing(const char* pathDir);
int fileTransfer(const char* origin, const char* destination, const char* newName);

#endif