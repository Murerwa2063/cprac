#include <stdio.h>
int main() {	
int num1, num2, num3, num4, sum;
	printf("This simple program adds squares of any four given numbers");

	printf("\n\n\nEnter any four numbers: ")
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
//calculating the sum of the squares of entered numbers
sum= (num1*num1) + (num2*num2) + (num3*num3) + (num4*num4)

printf("Answer: %d + %d + %d + %d =  %d ", num1, num2, num3, num4, sum);

return 0;
}
