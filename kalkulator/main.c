#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	float first_digit, second_digit, result;
	char* sign;
	printf("Please enter the first digit\n");
	scanf("%f", &first_digit);
	printf("Please enter the secind digit\n");
	scanf("%f", &second_digit);
	printf("Please enter + or - or * or /\n");
	scanf("%s", sign);
	printf("%f %f %s", first_digit, second_digit, sign);
	if ("+" == sign)
		result = first_digit + second_digit;
	if ("-" == sign)
		result = first_digit - second_digit;
	if ("*" == sign)
		result = first_digit * second_digit;
	if ("/" == sign)
		result = first_digit / second_digit;
	printf("%f %s %f = %f\n", first_digit, sign ,second_digit, result);
	return 0;
}
