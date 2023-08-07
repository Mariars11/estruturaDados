#include <stdio.h>

int IsNumeroPrimo(int numero){
    int resultado = 0;

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            resultado++;
            break;
        }
    }

    if (resultado == 0)
        return 1;
    else
        return 0;
}
int main(int argc, char *argv){
    //printf("%d", num);

    if(IsNumeroPrimo(argv[1]) == 1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
