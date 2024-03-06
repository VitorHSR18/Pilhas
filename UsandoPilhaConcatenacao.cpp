#include <conio2.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


#include "TADPilha.h"
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
	

int main (void)
{
	// LIFO ... " Last in , First Out " 
	TpPilha Pilha,Pilha2;
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
								Push(Pilha,LeElemento());
								printf("\nElemento Empilhado!\n");
						}
						else 
							printf("\nPilha Cheia!\n");
						
						break;
						
			case 'C':	if(!Vazia(Pilha.TOPO))
							printf("\nElemento Desempilhado: %c\n",Pop(Pilha));
						else
							printf("\nPilha Vazia!\n");
						break;
						
			case 'D':	if(!Vazia(Pilha.TOPO))
							printf("\n Elemento do Topo: %c",ElementoTopo(Pilha));
						else
							printf("\nPilha Vazia!\n");
						break;
						
			case 'E':	printf("\nConteudo da Pilha:\n"); 
						if(!Vazia(Pilha.TOPO))
							Exibir(Pilha);
						else
							printf("\nPilha Vazia!\n");
						break;
			case 'F':   printf("\nConcatenacao da Pilha\n");
						printf("\nPILHA 1:\n");
						InserirElementos(Pilha);
						printf("\nPILHA 2\n");
						InserirElemento(Pilha2);
						Concatenacao(Pilha,Pilha2);
						printf("\nResultado da Concatenacao")
						Exibir(Pilha)
						break
						
						
		}
		getch();
	}while(op!=27);
	
	return 0;
}
