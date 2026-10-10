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

<img width="711" height="667" alt="image" src="https://github.com/user-attachments/assets/891c7847-9413-4c69-b62f-405f44d0fbdf" />



Ссылка на мою диаграмму: <a href="https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22jipT6YbAeCHEhweNu7gy%22%3E7Vtbj5s4FP41SN2HqRyb6%2BOEpO1Ku1KlPHRn39jgSdg6mHWcJsyvrwETwORCsoZ0MiPNWPbxlfOdmw%2FEQP5q95kFyfJPGmJiQBDuDDQxIBwBCI3sD4RpQbFtUBAWLArloIowi15wOVNSN1GI142BnFLCo6RJnNM4xnPeoAWM0W1z2DMlzV2TYIFbhNk8IG3qtyjky4LqQqeif8HRYlnuPLK9omcVlIPlk6yXQUi3NRKaGshnlPKittr5mGTMK%2FlSzPt0pHd%2FMIZj3mVCNHmZgJe%2FrSf3wfs88Z2nmTN7GFnFMjhssaFaV5LWdMPm%2BNRiphzI05J92boz2aSML%2BmCxgGZVtQxo5s4xNkZgWhVY%2F6gNBHEkSD%2BizlPpWgEG04FaclXRPbuWSlkENMV5iwVZ2CYBDz60XyoQArDYj9uP%2FUrjcTjQlAKLpKopaU4guYSPGALzOWsiuuiUjtGRcqxuAQX8zgMNe4SIvQg4%2BJ2GXE8S4Icn61QxSaPhOwl%2BPd4LXSpxjUIfgRkI9cyBP%2B9SVaOgSGGuE5ZF%2BU4L6dyEmYc72pnanN%2FWVMJS3JuW1MfSZKLeE1eQ3AcrQafL2aqo1PY7VsJu7CAufCdOpw7jFa4A2uF3UUrcmEXVTEqIAQTumDBSvAuwSwSJ8BM7ftadVyuSM%2FRDpd%2B67hi5eW4KK1cvUZ5WVDcnMWalGtvqnZNZTtmyfSpl6dTvdy79SV7ezeQ1pQnfselicve0aRKeyhr5naxZmxJV%2F9s1lp8vLAxIK%2BBkejxxWY%2BvMrsuJf69Jan0GZ1TJ3SvY%2FVB5VucUyW%2FpXN%2F2iVzSe5XN6Y7BqtVLY6BgPIu0B9JHwP4KPpmu4ZlXpkLEhrA5JMVdbdLaEJrTr%2BrfHo9HhRKU5wZDdHmT203QWvMFpJmODG8wcD2v9tsptpHvl7jgxTstKX94L9iN%2BuMiHOgcgFNm2Ic8ZvarMhEOm0IfB%2BPKR948hFZ3bijnBBKi4DRy4lK28RuQhV9U3xb%2FUUuKhRYX%2BRC7J1SvdNcm%2B%2FZuRiWf%2FX0JnWwArVKd33KkIFJcch6pPBAgYIBosYdKYS4c1Sido9k6UiMLRn0pmDuiNczHOa0TcunTK3%2FUQMYmtfqKvv9hQxqNFYjxED0Cnd95PJs8wbS%2FcNM3lelsgDWTHqSb5Vm96jfOv0qujA%2B9L3iPhahzF0RIxOIP9LR8StgHhcC4hh%2BR6991AYnTOJ%2BhLwOp0SutknJD0m0h1gn1G%2FSxPpqsPrN5FuKi9zhk6ko%2Fu5HU9r92KrvB0Lij%2BASTDdoUwC8roApv3rpUdpXaukQ2F17as4ev67JfUlZ0sv9NnYTglX8XS8yblDjF1zRr9jnxKaaURMY5yLMyEKKSDRIhbNudgx15GMf9E8II%2ByYxWF4QH7exCbBh7wKjxQGw%2B7icdIvYg5veGB3vE4jwdSLw794dHJQ7x1PExzMDys146HWSate0HCUjyxernSB0SnvNvbBWKkxkT9IeG8I3HSWahf4%2FWHRKds3dtFwlS%2Fu7kCCdGsftlS3AOr3weh6U8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E">Диаграмма №7</a>


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
