/* 2)	Mostre todos os n�meros �mpares de 50 at� 300.Utilize o la�o do while. */

#include<stdio.h>

main(){
    int numerosImpares;//Declara��o das Variaveis

    numerosImpares = 50;//Atribui��o do Valor Inicial � vari�vel

    printf("Todos os numeros impares de 50 a 300!\n");
    do{
        if((numerosImpares%2)==1){//Valida��o se � impar
            printf("%d\n", numerosImpares);//Exibe na tela
        }
        numerosImpares = numerosImpares + 1;//Acrescenta 1 ao ultimo valor de numerosImpares
    }while(numerosImpares < 300);//Controlador de Indice
}
