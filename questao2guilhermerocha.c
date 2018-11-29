/*
Nome: Guilherme Vasconcelos Rocha
Matricula: 0050015970
*/

#include <stdio.h>
#include <string.h>

int main()
{
int i, j, tam, cont = 0;
char palavra[256], carac;

//ler paralavra
printf ("PROCURANDO LETRAS\n\n");
printf ("Insira a palavra a ser analizada: ");
gets (palavra);
tam = strlen(palavra);

//teste se pegou a palavra
for (i = 0; i < tam; i++){
	printf ("%c", palavra[i]);
}

//qual caractere sera analizado
printf ("\nQual caractere deseja analisar: ");
scanf ("%c", &carac);

for (i = 0; i < tam; i++){
	if (palavra[i] == carac) cont++;
}
printf ("\nA letra '%c' foi encontrada %d vezes", carac, cont);

getch();
return 0;
}
