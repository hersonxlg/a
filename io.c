#ifndef _myIO
#define _myIO

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int getInt() {
    char bufferEntrada[40];
    int num = 0;
    gets(bufferEntrada);
    sscanf(bufferEntrada,"%d",&num);
    return num;
}
float getFloat() {
    char bufferEntrada[40];
    float num = 0;
    gets(bufferEntrada);
    sscanf(bufferEntrada,"%f",&num);
    return num;
}
double getDouble() {
    char bufferEntrada[40];
    double num = 0;
    gets(bufferEntrada);
    sscanf(bufferEntrada,"%lf",&num);
    return num;
}
char * getString() {
    char bufferEntrada[520];
    char * str = NULL;
    int len = 0;
    gets(bufferEntrada);
    len = strlen(bufferEntrada);
    str = malloc(len+1);
    if ( str == NULL )
        puts("ERROR al solicitar mas memoria RAM. \"FUCION MALLOC()\" "); 
    else
        strcpy(str,bufferEntrada);
    return str;
}
#endif
