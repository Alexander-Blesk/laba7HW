# Laba7
# Домашняя работа (Условие)

<img width="765" height="78" alt="image" src="https://github.com/user-attachments/assets/957ce694-ac0e-4039-9807-be32f40b3f07" />


# Алгоритм и блок-схема

1. Начало
   
2. Объявить переменные

3. Получить переменную от пользователя

4. Проверка условия через switch

5. Конец

# Блок-схема 


# Реализация программы

```
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
```
# Пример работы программы:

<img width="399" height="105" alt="image" src="https://github.com/user-attachments/assets/4d0d688c-2055-4ae4-8351-c58db71cb047" />


# Информация о разработчике

ФИО: Васянин Александр Сергеевич

Группа: бОТИ-261
