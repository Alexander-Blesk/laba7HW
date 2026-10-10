# Laba7
# Домашняя работа (Условие)

<img width="765" height="78" alt="image" src="https://github.com/user-attachments/assets/957ce694-ac0e-4039-9807-be32f40b3f07" />


# Алгоритм и блок-схема

1. Начало
   
2. Настройка русской локализации
  
3. Получить от пользователя порядковый номер месяца
	
4. С помощью оператора-переключателя `switch (x)` определить время года:
	- для месяцев 12,1,2 вывести зима
    - для месяцев 3,4,5 вывести весна
    - для месяцев 6,7,8 вывести лето
    - для месяцев 9,10,11 вывести осень

5. Конец

# Блок-схема 

<img width="750" height="671" alt="image" src="https://github.com/user-attachments/assets/521a7075-1a49-40d1-8d5a-6b992220afab" />

Ссылка на мою диаграмму: <a href="https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22jipT6YbAeCHEhweNu7gy%22%3E7Vptb5swEP41SNuHVo7N68eGZN2kTZqUD1v3jQU3MJGYOU4T%2But3gHlN05DOkDaq1Fr2YRvn7p67hwONuMvdLffi4BvzaaRh5O80MtEwHiGMtfQP%2BUkuMU2UCxY89OWkSjALH2mxUko3oU%2FXjYmCsUiEcVM4Z6sVnYuGzOOcbZvT7lnUvGvsLeieYDb3on3pj9AXQS61sVXJP9NwERR3HplOfmXpFZPlL1kHns%2B2NRGZasTljIm8t9y5NEqVV%2BglX%2FfpwNXyYJyuRJcF4eRxgh5%2FGXf2lXM7ca27mTW7Ghn5NtTfU0O1rxSt2YbP6XOb6XKiSAr1pfvO5JBxEbAFW3nRtJKOOdusfJqeEcGomvOVsRiEIxD%2BoUIk0jW8jWAgCsQykldLVYIPUrakgidwBk4jT4QPzR%2FlSWdYlPPKpd9ZCD8Xo8JxibRaUrgjam4hPL6gQq6qtA6d2jEqUWaLU%2ByiHzZDTbtRBDhItbgNQkFnsZfZZwtQbOoIfC%2BmX1ZrwFJNaxg9eNFG7qWB%2Fp1J2o6RBlNsq%2BhDO87aqVxEuaC72pn2tR%2FUIGFIzW1r8JEiuYnT1DVGh63V0PPJSrVUOrt5LmeHCJg533OHs4dBhT0wKswuqMicHbowy4siGrEF95agu5jyEE5Aefva9%2BrC6UC6D3e0yFuHgZW147w1MniNsjaX2JmKFYGrDFW7JtgORTJ18HJUwsu%2B2FxSxruBUFOc%2BN0uTbuUiSZpjYeKZnaXaMYDtvy9WSvJ8RBjUNZDI7jiws1c%2FKKwY5%2Ba0%2FcyhbKoo6v07pKrD%2BrdcEye%2FEzXXxvF8E5ulw0mu8YokaOOZIA4J8BHmu8KXeu2bh%2BB1A3nXlKbEKdQWXePhDo26vbfm0%2Benw%2Bd%2FAQH7ma1Vg8dd9EbZCsxB23cf9Cw%2BXeTPplmzN%2BxJE1JW1c%2BF5QzPr4ohFhPMBfcjCHWkbypLIZgojKG4MvJkOaZmYvK6sQF2YW07TIwcylUeQ7mAlB1dfg3eiIubVbYH3MhpkrvPkvt7XUyF8P430CnGwMDqlO5701QhVaNA%2FqTwQgDRoMxBpWlRHy2UqLyzGS0LTB0ZlJZg7ogu%2BjHkNG3XTpVbvthDHBrF%2BDq2j0xhjYb65ExIJXefTmVPEM%2Fs3efsZLnpIU8lDajnvy7HdN79G%2BVWZU88b70nRG%2FNGEMzYjJM5Z%2F1Yx4jxCPa4QYF%2B%2FRe6fC5FhIVFeAV5mUyNk%2BIemxkG4h8wj8Ti2ktxNev4V0vfUyZ%2BhCOrmcp%2BNp7bnYKJ6OQeIOEBJ0e6iQQJwuBlP%2B9dKNjK5V0SGPuuaLNHr8u6X2S849XHRQKAyrTwBzwFQfUpLpPw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E">Диаграмма №7</a>


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
Ввести 4

Выход: Весна

<img width="399" height="105" alt="image" src="https://github.com/user-attachments/assets/4d0d688c-2055-4ae4-8351-c58db71cb047" />


# Информация о разработчике

ФИО: Васянин Александр Сергеевич

Группа: бОТИ-261
