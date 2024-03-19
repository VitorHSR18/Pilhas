#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <ctype.h>
#include<string.h>

//#include "TADPilha.h"








void Moldura (int ci, int li, int cf, int lf, int cort) //moldura
{ 
	
	textcolor(cort);
	
	
	gotoxy(ci,li);
	printf("%c",201);
	gotoxy(ci,lf);
	printf("%c",200);
	gotoxy(cf,li);
	printf("%c",187);
	gotoxy(cf,lf);
	printf("%c",188);
	int i;
	for(i=ci+1;i<cf;i++){
		gotoxy(i,li);
		printf("%c",205);
		gotoxy(i,lf);
		printf("%c",205);
	}
	
	for(i=li+1;i<lf;i++){
		gotoxy(ci,i);
		printf("%c",186);
		gotoxy(cf,i);
		printf("%c",186);		
	}
	
	textcolor(7);
	textbackground(0);	
}
void formulario(void) // formulario
{
	system("cls");
	//Moldura(1,2,100,27,9); // BORDA
	//Moldura(1,27,100,27,0); // tirar o final da borda
		gotoxy(25,4);
		textcolor(7);
		printf("# # # Paciencia # # #");
	Moldura(2,3,70,5,9); // Titulo
	Moldura(2,6,70,12,9); 
	gotoxy(9,13);
	textcolor(7);
	Moldura(3,7,9,11,12); 
	Moldura(11,7,17,11,7);
	Moldura(33,7,39,11,12);
	Moldura(41,7,47,11,7);
	Moldura(49,7,55,11,12);
	Moldura(57,7,63,11,7);
		gotoxy(30,25);
		textcolor(6);	
}

int main(void)
{
	//TpPilha1 P1[14];
	
	formulario();
	
	
}
