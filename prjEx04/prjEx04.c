/* 4)	Pergunte ao usuário quantos alunos tem na sala dele.
Em seguida, através de um laço do while, peça ao usuário para que entre com as notas de todos os alunos da sala, um por vez.
 Exiba a média da turma e quantas notas foram digitadas maiores ou iguais a 6. */

 #include <stdio.h>

 main(){

    int qtdeAlunos, qtdeMaiorIgual6, i;//Declaração das variáveis
    i = 0;//Decladaração de valor 0 ao indice controlador do loop
    qtdeMaiorIgual6 = 0;//Declaração de valor 0 a variavel de contagem

    do{
        printf("Digite a quantidade de alunos: ");//Solicitação de Entrada de Dados
        scanf("%d", &qtdeAlunos);//Armazenamento da Entrada de Dados

        if(qtdeAlunos <= 0){
            printf("A quantidade de alunos deve ser maior do que 0!\n");//Verificação da quantidade de alunos para envio da mensagem de erro
        }
    }while(qtdeAlunos <= 0);//Validação de consistencia da entrada de dados

    float notas[qtdeAlunos], somaNotas;//Declaração da variavel do tipo Array e da soma das notas
    somaNotas = 0;//Declaração de Valor 0 a soma das notas

    do{
        printf("Digite a nota: ");//Solicitação da entrada das notas
        scanf("%f", &notas[i]);//Armazenamento da entrada das notas

        if(notas[i] >= 6 ){//Verificação se a nota é maior ou igual a 6
            qtdeMaiorIgual6++;//Acrescentando 1 à variavel contadora da quantidade de notas maiores ou iguais a 6
        }

        somaNotas = somaNotas + notas[i];//Soma das notas para fazer a média e exibir
        i++;
    }while(i < qtdeAlunos);//Validação da continuidade do loop

    printf("A media da turma foi: %.2f\n", somaNotas / qtdeAlunos);//Exibição das medias

    if(qtdeMaiorIgual6 > 0){//Validação para descobrir se obtiveram notas maiores ou iguais a 6
        printf("A quantidade de notas maiores ou iguais a 6 foram: %d\n", qtdeMaiorIgual6);//Exibição da quantidade de notas maiores ou iguais a 6
    }
    else{
        printf("Nao foram obtidas notas maiores ou iguais a 6!\n");//Exibição mensagem de erro
    }
 }
