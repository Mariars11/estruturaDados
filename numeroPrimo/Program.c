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
int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    //printf("%d", num);

    if(IsNumeroPrimo(num) == 1){
        printf("O numero eh primo!");
    }
    else{
        printf("O numero nao eh primo!");
    }
    
}
