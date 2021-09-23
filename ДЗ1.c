#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	int num = 0, i = 0;
	bool b = false;
	char c;

	printf("Enter your number: ");

	while ((c = getchar()) != '\n') {

		if (c == '-') {
			b = true;
		}

		else if ((c == '0') || (c == '1')) {

			c -= '0';
			num += (int)c * (int)pow(2, i);
			i++;
			if (num > (255)) {
				printf("Enter a smaller number");
				return -1;
			}
		}
		else {
			printf("The number is incorrect");
			return -1;
		}
	};

	if (b == true)
		num *= (-1);
	printf("%d\n", num);

	return 0;
}