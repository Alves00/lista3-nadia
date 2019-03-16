/* 4)	Pergunte ao usu�rio quantos alunos tem na sala dele.
Em seguida, atrav�s de um la�o do while, pe�a ao usu�rio para que entre com as notas de todos os alunos da sala, um por vez.
 Exiba a m�dia da turma e quantas notas foram digitadas maiores ou iguais a 6. */

 #include <stdio.h>

 main(){

    int qtdeAlunos, qtdeMaiorIgual6, i;//Declara��o das vari�veis
    i = 0;//Decladara��o de valor 0 ao indice controlador do loop
    qtdeMaiorIgual6 = 0;//Declara��o de valor 0 a variavel de contagem

    do{
        printf("Digite a quantidade de alunos: ");//Solicita��o de Entrada de Dados
        scanf("%d", &qtdeAlunos);//Armazenamento da Entrada de Dados

        if(qtdeAlunos <= 0){
            printf("A quantidade de alunos deve ser maior do que 0!\n");//Verifica��o da quantidade de alunos para envio da mensagem de erro
        }
    }while(qtdeAlunos <= 0);//Valida��o de consistencia da entrada de dados

    float notas[qtdeAlunos], somaNotas;//Declara��o da variavel do tipo Array e da soma das notas
    somaNotas = 0;//Declara��o de Valor 0 a soma das notas

    do{
        printf("Digite a nota: ");//Solicita��o da entrada das notas
        scanf("%f", &notas[i]);//Armazenamento da entrada das notas

        if(notas[i] >= 6 ){//Verifica��o se a nota � maior ou igual a 6
            qtdeMaiorIgual6++;//Acrescentando 1 � variavel contadora da quantidade de notas maiores ou iguais a 6
        }

        somaNotas = somaNotas + notas[i];//Soma das notas para fazer a m�dia e exibir
        i++;
    }while(i < qtdeAlunos);//Valida��o da continuidade do loop

    printf("A media da turma foi: %.2f\n", somaNotas / qtdeAlunos);//Exibi��o das medias

    if(qtdeMaiorIgual6 > 0){//Valida��o para descobrir se obtiveram notas maiores ou iguais a 6
        printf("A quantidade de notas maiores ou iguais a 6 foram: %d\n", qtdeMaiorIgual6);//Exibi��o da quantidade de notas maiores ou iguais a 6
    }
    else{
        printf("Nao foram obtidas notas maiores ou iguais a 6!\n");//Exibi��o mensagem de erro
    }
 }
