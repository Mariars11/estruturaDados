#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ponto{ //o tipo
    int x;
    float y;
} Ponto;
const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ",");
        tok && *tok;
        tok = strtok(NULL, ",\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}

int main(int argc, char* argv[]){
    FILE *stream = fopen(argv[1], "r");
    int i = 0;
    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = _strdup(line);
        i++;
        printf("Element %d would be %s\n", i, getfield(tmp, i));
        free(tmp);
    }
    struct Ponto pontos[99];

    return 0;
}