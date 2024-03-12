#include <conio2.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#include "TADPILHACASO1.h"
#include "TADPilha.h"
/* ANOTAÇÃO
	PARA REALIZAR CONTAS EM UMA PILHA DE STRING PRECISO PEGAR O CHARACTER FAZER -48 FORMULA: INT = EXPRESSÃO[N] - 48  , SE DER UM OPERADOR VOCÊ PEGA OS 2 ULTIMOS NUMEROS E FAZ A CONTA
	E SE FOR DIVIDIR OU SUBTRAIR PEGA O SEGUNDO NUMERO QUE TIROU - OU / PRIMEIRO NUMERO QUE TIROU
*/
//funções
char Menu(void)
{
	clrscr();
	printf("### Operacoes sobre Pilha ###\n");
	printf("[A] Inicializar\n");
	printf("[B] Empilhar (PUSH)\n");
	printf("[C] Desempilhar (POP)\n");
	printf("[D] Elemento do Topo\n");
	printf("[E] Exibir\n");
	printf("[F] Exerc . 01 - Concatenação de Pilha\n");
	printf("[G]-EXERCICIO 2: exclusao \n");
	printf("[ESC] SAIR\n");
	return toupper(getche());
}

char LeElemento(void)
{
	printf("\nElemento: ");
	return getche();
}

void InserirElementos(TpPilha &P)
{
	char Elemento;
	Inicializar(P);
	printf("\nDigite os Elementos:\n");
	Elemento = getche();
	while(Elemento!=27 && !Cheia(P.TOPO))
	{
		Push(P,Elemento);
		Elemento = getche();
	}
}

void Concatenacao(TpPilha &P,TpPilha P2)
{
	TpPilha P3;
	while(!Vazio(P2.TOPO))
		Push(P3,Pop(P2));
	
	while(!Vazio(P3.TOPO))
		if(!Cheia(P1.TOPO))
			Push(P,Pop(P3));  // Pega da pilha 3 e taca na 1 e ja tira da 3 e decrementa o TOPO
			
}
	

void ExcluirElemento(TpPilha &P)  //exercicio 2
{
	TpPilha PE;
	char exc[10];
	Inicializar(PE);
	//Inicializar(Pexc);
	
	printf("\nQual elemento deseja excluir: ");
	exc=getche();
	while(!Vazia(P.TOPO))
	{
		if(P.TOPO!=exc)
			Push(PE,Pop(P));
		else
			Pop(P);	
	}
	while(!Vazia(PE.TOPO))
	{
		Push(P,Pop(PE));
		//printf("%s", P.TOPO);
	}
	printf("\nElemento excluido!");
	//printf("\nResultado da exclusao: ");
	//Exibir(P);
}




int main(void)
{
	//LIFO... "Last in, First out"
	TpPilhaM1 Pilha3;
	TpPilha Pilha, Pilha2;
	char op;
	do
	{
		op=Menu();
		switch(op)
		{
			case 'A':	Inicializar(Pilha);
						printf("\nPilha inicializada com sucesso!\n");
						break;
						
			case 'B':	if(!Cheia(Pilha.TOPO))
						{
							Push(Pilha, leElemento());
							printf("\nElemento empilhado!\n");
						}
						else
							printf("\nPilha vazia!");
						break;
						
			case 'C':	if(!Vazia(Pilha.TOPO))
							printf("\nElemento desempilhado: %c\n", Pop(Pilha));
						else
							printf("\nPilha vazia!");
						break;
						
			case 'D':	if(!Vazia(Pilha.TOPO))
							printf("\nElemento do topo: %c\n", ElementoTopo(Pilha));
						else
							printf("\nPilha vazia!");
						break;
						
			case 'E':	printf("\nConteudo da pilha: \n");
						if(!Vazia(Pilha.TOPO))
							Exibir(Pilha);
						else
							printf("\nPilha vazia!");
						break;	
						
			case 'F':	printf("\nConcatenização da pilha 2 com 1\n"); //exercicio 1
						printf("\nPilha 1: ");
						InserirElementos(Pilha);
						printf("\nPilha2: ");
						InserirElementos(Pilha2);
						Concatenacao(Pilha, Pilha2);
						printf("\nResultado da concatenacao: ");
						Exibir(Pilha);
						break;		
						
			case 'G':	printf("\nExclusao de elemento");
						InserirElementos(Pilha);
						ExcluirElemento(Pilha);
						printf("\nResultado da exclusao: ");
						Exibir(Pilha);
						break;		
						
							
		}
		getch();
		
	}while(op!=27);
	
	return 0;
	
//	TpReg Tab[10];
//	Cad();
//	Rel();
}
