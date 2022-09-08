#include<stdio.h> //biblioteca padrão para comandos i/o
#include<stdlib.h> //necessário para o system("pause")

int main (void)//função principal
{ //inicio do corpo da função principal


  printf("Ola mundo!!!\n");
  //printf envia um texto para a tela do monitor
  // \n é usado para delocar o cursor para a próxima linha

  printf("Este e um programa escrito em linguagem C\n");

  system("pause");
  // pausa a execução a fim de visualizarmos o resultado

  return 0; //valor de retorno das função main
} //fim do corpo da função principal e fim do programa

/*
Linha 1: temos a inclusão do arquivo de biblioteca stdio.h. Este arquivo é necessário para executar os comandos de entrada e saída na tela, como por exemplo o printf.

Linha 2 : inclusão do arquivo de biblioteca stdlib.h. Neste programa este arquivo foi necessário para podermos executar o comando system (“pause);

Linha 4: função principal. Todo programa em linguagem C deve obrigatoriamente possuir a função main.

Linha 5: Abrir { indica o início do código pertencente à função main(). As instruções do nosso programa ficam dentro do corpo da função main.

Linha 7: O comando printf exibe uma mensagem na tela. O símbolo \n desloca o cursor para a linha seguinte.

linha 11: Outro comando printf exibindo outro texto.

linha 13: system(“pause”); é um comando necessário no ambiente Windows para pausar a tela. Caso contrário o programa executaria e a tela fecharia tão rapidamente que não poderíamos ver o resultado.

linha 16: return 0; É o valor de retorno da função main(), obrigatório no padrão ANSI. Significa que o programa executou com sucesso.

linha 18: } chave fechando o corpo da função principal, significa fim do programa.
*/
