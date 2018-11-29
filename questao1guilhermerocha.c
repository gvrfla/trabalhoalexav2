/*
Nome: Guilherme Vasconcelos Rocha
Matricula: 0050015970
*/

#include <stdio.h>

int main()
{
int i, j, soma, matriz[4][4];

//leitura de matriz
printf ("INSIRA UMA MATRIZ 4 X 4\n\n");

for (i = 0; i < 4; i++){
	printf ("Insira os valores da %d linha\n", i+1);
	for (j = 0; j < 4; j++){
		printf ("Valor %d%d: ", i+1, j+1);
		scanf ("%d", &matriz[i][j]);
	}
}

//imprimindo matriz
printf ("\nA MATRIZ 4x4 FICOU:\n");
for (i = 0; i < 4; i++){
	printf ("|\t");
	for (j = 0; j < 4; j++){
		printf ("%d\t", matriz[i][j]);
	}
	printf ("|\n");
}

//somando 3 linha (i = 2) + 2 coluna (j = 1)
printf ("\nA linha 3 somada com a coluna 2: ");
for (j = 0; j < 4; j++){ //linha3
	soma = soma + matriz [2][j];
	printf ("%d + ", matriz[2][j]);
}
for (i = 0; i < 4; i++){ //coluna 2
	soma = soma + matriz[i][1];
	if (i != 3) printf ("%d + ", matriz[i][1]);
	if (i == 3) printf ("%d = %d", matriz [i][1], soma);
}

getch();
return 0;
}
