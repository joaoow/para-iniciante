#include<stdio.h> //biblioteca padr�o para comandos i/o
#include<stdlib.h> //necess�rio para o system("pause")

int main (void)//fun��o principal
{ //inicio do corpo da fun��o principal


  printf("Ola mundo!!!\n");
  //printf envia um texto para a tela do monitor
  // \n � usado para delocar o cursor para a pr�xima linha

  printf("Este e um programa escrito em linguagem C\n");

  system("pause");
  // pausa a execu��o a fim de visualizarmos o resultado

  return 0; //valor de retorno das fun��o main
} //fim do corpo da fun��o principal e fim do programa

/*
Linha 1: temos a inclus�o do arquivo de biblioteca stdio.h. Este arquivo � necess�rio para executar os comandos de entrada e sa�da na tela, como por exemplo o printf.

Linha 2 : inclus�o do arquivo de biblioteca stdlib.h. Neste programa este arquivo foi necess�rio para podermos executar o comando system (�pause);

Linha 4: fun��o principal. Todo programa em linguagem C deve obrigatoriamente possuir a fun��o main.

Linha 5: Abrir { indica o in�cio do c�digo pertencente � fun��o main(). As instru��es do nosso programa ficam dentro do corpo da fun��o main.

Linha 7: O comando printf exibe uma mensagem na tela. O s�mbolo \n desloca o cursor para a linha seguinte.

linha 11: Outro comando printf exibindo outro texto.

linha 13: system(�pause�); � um comando necess�rio no ambiente Windows para pausar a tela. Caso contr�rio o programa executaria e a tela fecharia t�o rapidamente que n�o poder�amos ver o resultado.

linha 16: return 0; � o valor de retorno da fun��o main(), obrigat�rio no padr�o ANSI. Significa que o programa executou com sucesso.

linha 18: } chave fechando o corpo da fun��o principal, significa fim do programa.
*/
