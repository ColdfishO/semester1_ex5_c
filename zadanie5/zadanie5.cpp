#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void autor(void) {
	printf("\n");
	for (int i = 1; i <= 120; i++) printf("*");
	printf("Autor programu: Simon Dudek\n\n");
	for (int i = 1; i <= 120; i++) printf("*");
}
float dzielenie(float D, float d) {
	if (d == 0) {
		printf("BŁĄD DZIELENIA PRZEZ ZERO!!!\n");
		exit(0);
	}
	else{
		D /= d;
		return D;
	}
}
int main()
{
	float D, d, w, tab[50];
	char n;
	int p = 0;
	setlocale(LC_ALL, "");
	autor();
	do {
		printf("Dzielenie liczb\npodaj dzielną:");
		scanf_s("%f", &D);
		printf("podaj dzielnik:");
		scanf_s("%f", &d);
		w = dzielenie(D, d);
		printf("ILORAZ wynosi: %f\n\n", w);
		tab[p] = w;
		printf("Czy wykonać program ponownie? (t\\n)?");
		scanf_s(" %c", &n, 1);
		while (n != 't' && n != 'n') {
			printf("Niepoprawny znak. Czy wykonać program ponownie (t\\n?)");
			scanf_s(" %c", &n, 1);
		}
		if (p == 49) {
			printf("Wykonano 50 dzieleń! Zostanie wyświetlona tablica z wynikami wszystkich dzieleń, następnie program zakończy pracę!");
			n = 'n';
		}
		p++;
	} while (n == 't');
	printf("Wyniki wszystkich wykonanych dzieleń:\n");
	for (int i = 0; i < p; i++)
	{
		printf("%f\n", tab[i]);
	}
	system("pause");
	return 0;
}