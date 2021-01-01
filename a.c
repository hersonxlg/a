#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc==2) {
        printf("%s\n",argv[1]);
    }else{
        printf("ERROR..\nNumero de parametros incorrectos.\n");
    }
    return 0;
}
