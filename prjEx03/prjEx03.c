/* 3)	Receba um n�mero inteiro e mostre os n�meros pares de 2 at� esse inteiro. Utilize o la�o do while. */

#include <stdio.h>

main(){
    int numInteiro, numPares;//Declara��o das Variaveis
    numPares = 0;//Atribui��o de Valores �s variaveis

    printf("Digite um valor: ");//Solicitar entrada de dados
    scanf("%d", &numInteiro);//Armazenar entrada de dados

    do{
        if((numPares%2) == 0){//Verificar se � par
            printf("%d\n", numPares);//Exibir na tela se for par
        }
        numPares++;//Acrescentar 1 ao ultimo valor da variavel numPares
    }while(numPares <= numInteiro);//Condi��o para looping
}
