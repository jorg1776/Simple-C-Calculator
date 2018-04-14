#include <stdio.h>

//run with Ctrl+F5
int main()
{
	int num1, num2, result;

	printf("Insert First Number: ");
	scanf_s("%d", &num1);

	printf("Insert Second Number: ");
	scanf_s("%d", &num2);

	char operation;
	printf("Slect Operation:\n");
	printf("Add: +\tSubtract: -\tMultiply: *\tDivide: /\n");
	scanf_s(" %c", &operation);

	result = calculate(operation, num1, num2);
	printf("Result = %d\n", result);

	return 0;
}

int calculate(char operation, int num1, int num2)
{
	switch (operation)
	{
		case '+':
			return add(num1, num2);
		case '-':
			return subtract(num1, num2);
		case '*':
			return multiply(num1, num2);
		default:
			break;
	}
	return 0;
}