

/* 

PILHAS MULTIPLAS CASO 2 PARA N PILHAS
VAMOS ARMAZENAR A BASE , TOPO E AS PILHAS

Sabemos que a pilha vai estar cheia quando ela está do lado da base da prox pilha
*/

#define MAXPILHA 10

struct TpPilhaM2
{
	int TOPO[MAXPILHA],Base[MAXPIHA];
	char PILHA[MAXPILHA];
};

void Inicializar(TpPilhaM2 &PM,int Qtde)  // Qtde de pilhas
{
	int qt,i;	
	
	
	QtdeElem = MAXPILHA / Qtde; 	// Separação das pilhas
	
	for (i=0;i<=Qtde;i++)
	{
		PM.Base[i]=i*QtdeElem; // 0 * 3 =0 // 1*3=3 // 2*3 = 6 e 3*3 = 9
		PM.TOPO[i]=PM.Base[i]-1; // TOPO = BASE -1 se é 0 fica -1 e assim vai
	}
	
}

void PUSH(TpPilhaM2 &PM,char Elem,int NP)
{
	PM.PILHA[++PM.TOPO[NP]]=Elem;
}

char POP(TpPilhaM2 &PM,int NP)
{
	return PM.PILHA[PM.TOPO[NP]--];
}

char ElemtoTopo(TpPilhaM2 PM,int NP)
{
	return [PM.TOPO[NP]];
}

char PMVazia(TpPilhaM2 PM,int NP)
{
	return PM.TOPO[NP] == PM.Base[NP]-1;
}

char PMCheia(TpPilhaM2,int NP)
{
	return PM.TOPO[NP]+1 == PM.Base[NP+1]; 
}

void ExibirPilha(TpPilhaM2 PM,int NP)
{
	while(!PMVazia(PM,NP))
		printf("%c",POP(PM,NP));
}

