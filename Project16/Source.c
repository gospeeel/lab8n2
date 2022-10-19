#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "RUS");
	float n;
	double x = 0.15, result;

	printf("Функция: y=х-3cos^2(1.04x)\n");
	printf("Интервал: [0.15;2.1]\n\n");
	printf("Введите шаг табуляции:");
	scanf("%f", &n);
	printf("---------------\n");
	printf("|   x  | f(x) |\n");
	printf("|------|------|\n");
	for (; x <= 2.5; x += n) {
		result = x - 3 * pow(cos(1, 04 * x), 2);
		printf("|%6.2lf|%6.2lf|\n", x, result);
	}
	return 0;
}