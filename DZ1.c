#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void) {

	int num = 0, i = 0, k = 0, quan = 0, m = 0, p = 0;       //объявляем переменные
	bool b = false;
	char c, arr[255];

	for (i = 0; i < 255; i++) {                   //обнуляем массив
		arr[i] = 0;
	}

	printf("Enter your number: ");                //пользователь вводит число

	while ((c = getchar()) != '\n') {

		++quan;                                   //считаем количество введенных цифр

		if (c == '-') {                           //проверка на отрицательность
			b = true;
		}

		else if ((c == '0') || (c == '1')) {

			c -= '0';
			arr[k++] = c;                        //заполняем массив символами
		}

		else {                                   //завершаем работу, когда не 2СС

			printf("The number is incorrect");
			return -1;
		}
	}

	if (b == true) {                             //если число отрицательное

		for (int m = quan - 2; m > -1; --m) {

			num += (int)(arr[m]) * (int)pow(2, p);
			p++;

			if (num > (255)) {                   //если число не помещается в массив
				printf("Enter a smaller number");
				return -1;

			}
		}
	}
	 
	else {                                       //если число положительное

		for (int m = quan - 1; m > -1; --m) {

			num += (int)(arr[m]) * (int)pow(2, p);
			p++;

			if (num > (255)) {
				printf("Enter a smaller number");
				return -1;
			}
		}
	
	}

	 if (b == true) {                            //учитываем начальный знак 
		 num *= (-1);
	 }

	printf("Your number: %d\n", num);

	return 0;
}