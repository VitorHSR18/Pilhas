#define MaxPilha 10
// Listas Concorrentes Caso 1
struct TpPilhaM1
{
	int TOPO1,TOPO2;
	char PILHA[MaxPilha];
}

void Inicializar(TpPilhaM1 &PM)
{
	PM.TOPO1 = -1; // começo
	PM.TOPO2 = MaxPilha; // Final
}

void PUSH(TpPilhaM1 &PM,int NP,char Elemento) // NP Qual é a pilha que vou mexer 1 ou 2
{
	if(NP == 1)
		PM.PILHA[++PM.TOPO1]=Elemento;
	else
		PM.PILHA[--PM.TOPO2]=Elemento;
}

void POP(TpPilhaM1 &PM,int NP,char Elemento)
{
	if(NP==1)
		return PM.PILHA[PM.TOPO1--];
	else
		return PM.PILHA[PM.TOPO2++];
}

void ElementoTopo(TpPilhaM1 PM,int NP)
{
	if(NP==1)
		return PM.PILHA[PM.TOPO1];
	else
		return PM.PILHA[PM.TOPO2];
}

void Exibir(TpPilhaM1 PM,int NP)
{
	if(NP==1)
		while(!PMVazia(PM.TOPO1,1)
			printf("%c\n",POP(PM,NP);
	else
		while(!PMVazia(PM.TOPO2,2)
			printf("%c\n",POP(PM,NP);
}
void PMVazia(int TOPO,int NP)
{
	if(NP==1)
		return topo==-1;
	else
		return topo==MaxPilha;
		
void PMCHEIA(int topo1,int topo2)
{
	return topo1+1==topo2;
}
