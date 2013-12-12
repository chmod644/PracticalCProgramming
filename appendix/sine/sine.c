/*
 * sine
 * usage:
 *   sine <value>
 *   <value> radian angle
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* float_2_ascii */
static char *float_2_ascii(float number) {
	static char result[11];
	sprintf(result, "%8.3E", number);
	return result;
}

/* fix_float */
float fix_float(float number) {
	float result;
	char  ascii[11];

	sprintf(ascii, "%8.4e", number);
	sscanf(ascii, "%e", &result);
	return result;
}

/* factorial */
float factorial(float number) {
	if (number <= 1.0) {
		return number;
	} else {
		return number *factorial(number - 1.0);
	}
}

int main(int argc, char *argv[])
{
	float total;
	float new_total;
	float term_top;
	float term_bottom;
	float term;
	float exp;
	float sign;
	float value;
	int   index;

	if (argc != 2) {
		fprintf(stderr, "Usage is:\n");
		fprintf(stderr, "  sine <value>\n");
		exit(8);
	}

	value = fix_float(atof(&argv[1][0]));

	total = 0.0;
	exp   = 1.0;
	sign  = 1.0;

	for (index = 0; /* attention */ ; ++index) {
		term_top    = fix_float(pow(value, exp));
		term_bottom = fix_float(factorial(exp));
		term        = fix_float(term_top / term_bottom);

		printf("x**%d     %s\n", (int)exp,
				float_2_ascii(term_top));
		printf("%d!       %s\n", (int)exp,
				float_2_ascii(term_bottom));
		printf("x**%d/%d!  %s\n", (int)exp, (int)exp,
				float_2_ascii(term));
		printf("\n");
		new_total = fix_float(total + sign * term);

		if (new_total == total) {
			break;
		}

		total = new_total;
		sign = -sign;
		exp = exp + 2.0;
		printf("  total  %s\n", float_2_ascii(total));
		printf("\n");
	}
	printf("%d term counter\n", index + 1);
	printf("sin(%s)=\n", float_2_ascii(value));
	printf("  %s\n", float_2_ascii(total));
	printf("Actual sin(%G)=%G\n", 
			atof(&argv[1][0]), sin(atof(&argv[1][0])));
	return 0;
}
