#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
    FILE *stream;

    stream = fopen("teste.txt", "r"); 
    //r - abre um arquivo existente para leitura
    //w - se arquivo não existir, criado; se ele já existir é recriado
    //a - se existir ele escreve em cima

    if(stream == NULL){
        perror("Não foi possivel abrir o arquivo");
        exit(1);
    }
    
    fprintf(stream, "ola, mundo"); //escreve em um arquivo

    int c;

    while(c != EOF){ //End of File
        c = fgetc(stream);
        printf("%c", c);
    }
    fclose(stream);

    FILE *streamBin;

    streamBin = fopen("bin.dat", "w");

    if(streamBin == NULL){
        perror("Não foi possivel abrir o arquivo");
        exit(1);
    }
    int i = 2;
    fwrite (&i, sizeof(1), 1, streamBin);

    int a[] = {1,2};
    fwrite (&a, sizeof(int), 2, streamBin);

    fclose(streamBin);

    streamBin = fopen("bin.dat", "r");

    if(streamBin == NULL){
        perror("Não foi possivel abrir o arquivo");
        exit(1);
    }

    int num;
    
    fread(&num, sizeof(int), a, streamBin);
    while(!feof(streamBin)){
        printf("%d\n", num);
        fread(&num, sizeof(int), a, streamBin);
    }

    fclose(streamBin);
}