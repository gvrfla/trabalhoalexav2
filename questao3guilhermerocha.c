/*
Nome: Guilherme Vasconcelos Rocha
Matricula: 0050015970
*/

#include <stdio.h>

int main()
{
int i, j, quant = 0;
float obj[3000], menor = 1000000000;

for (i = 0; i < 3000; i++){
	printf("Objeto %d: ", i+1);
	scanf ("%f", &obj[i]);
}

for (i = 0; i < 3000; i++){
	printf ("%.2f", obj[i]);
}

for (i = 0; i < 3000; i++){
	if (obj[i] < menor){
		menor = obj[i];
		quant = 0;	
	}
	if (obj[i] == menor) quant++;
}

printf ("\n\nO menor peso: %.2f", menor);
printf ("\n%d produtos tem esse peso.", quant);

 
getch();
return 0;
}
