#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
main() {
	setlocale(LC_CTYPE, "RUS");
	int x;
	printf("Введите число вашего меcяца: ");
	scanf("%d", &x);
	switch (x) {
		case 12:
		case 1:
		case 2:
			printf("Ваше время года зима");
			break;
		case 3:
		case 4:
		case 5:
			printf("Ваше время года весна");
			break;
		case 6:
		case 7:
		case 8:
			printf("Ваше время года лето");
			break;
		case 9:
		case 10:
		case 11:
			printf("Ваше время года весна");
			break;
		default:
			printf("Месяца с таким номером не существует!!!");
			break;
	}
}