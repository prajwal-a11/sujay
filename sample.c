#include <stdio.h>

int main() {
int num1, num2, sum;

// Prompt user to enter two integers
printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);


sum = num1 + num2;

printf("%d + %d = %d\n", num1, num2, sum);

return 0;
}
