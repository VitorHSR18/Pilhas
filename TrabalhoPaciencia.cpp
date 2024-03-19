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
	Moldura(1,2,100,27,7); // BORDA
	Moldura(1,27,100,27,0);
		gotoxy(37,4);
		textcolor(7);
		printf("# # # Paciencia # # #");
	Moldura(2,3,99,5,7);
	Moldura(2,6,99,14,7); // Titulo
	gotoxy(9,13);
	textcolor(7);
	printf("Tecle Enter");
	Moldura(3,7,16,11,12); 
	Moldura(17,7,30,11,7);
	Moldura(31,6,31,12,7);
	Moldura(33,7,46,11,12);
	Moldura(47,7,60,11,7);
	Moldura(61,7,74,11,12);
	Moldura(75,7,88,11,7);
		gotoxy(30,25);
		textcolor(6);	
}

void main(void)
{
	//TpPilha1 P1[14];
	
	formulario();
}
