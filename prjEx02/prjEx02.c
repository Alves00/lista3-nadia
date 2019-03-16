/* 2)	Mostre todos os números ímpares de 50 até 300.Utilize o laço do while. */

#include<stdio.h>

main(){
    int numerosImpares;//Declaração das Variaveis

    numerosImpares = 50;//Atribuição do Valor Inicial à variável

    printf("Todos os numeros impares de 50 a 300!\n");
    do{
        if((numerosImpares%2)==1){//Validação se é impar
            printf("%d\n", numerosImpares);//Exibe na tela
        }
        numerosImpares = numerosImpares + 1;//Acrescenta 1 ao ultimo valor de numerosImpares
    }while(numerosImpares < 300);//Controlador de Indice
}
