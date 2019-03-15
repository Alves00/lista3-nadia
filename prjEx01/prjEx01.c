/* 1)	Mostre todos os números ímpares de 1 até 100.Utilize o laço while. */


#include <stdio.h>

main(){
    int numImpares;
    numImpares = 0;

    printf("Todos os numeros impares ate 100!\n");

    do{
        if((numImpares%2) == 1){
            printf("%d\n", numImpares);
        }
        numImpares++;
    }while(numImpares < 100);
}
