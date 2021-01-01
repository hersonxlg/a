#include "io.c"

int main(int argc, char *argv[])
{
    printf("Ingresa tu nombre:\n");
    char * nombre = getString();
    printf("\n\nEl nombre ingresado es: \"%s\"\n\n",nombre);
    return 0;
}
