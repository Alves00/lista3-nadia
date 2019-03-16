/* 3)	Receba um número inteiro e mostre os números pares de 2 até esse inteiro. Utilize o laço do while. */

#include <stdio.h>

main(){
    int numInteiro, numPares;//Declaração das Variaveis
    numPares = 0;//Atribuição de Valores às variaveis

    printf("Digite um valor: ");//Solicitar entrada de dados
    scanf("%d", &numInteiro);//Armazenar entrada de dados

    do{
        if((numPares%2) == 0){//Verificar se é par
            printf("%d\n", numPares);//Exibir na tela se for par
        }
        numPares++;//Acrescentar 1 ao ultimo valor da variavel numPares
    }while(numPares <= numInteiro);//Condição para looping
}
