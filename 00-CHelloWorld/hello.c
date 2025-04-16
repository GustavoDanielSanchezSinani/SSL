#include <stdio.h>

int main(int argc, char const *argv[])
{
   FILE *archivo = fopen("output.txt", "w");
   fprintf(archivo, "Hola Gustavo Sanchez"); 
   fclose(archivo);
    return 0;
}