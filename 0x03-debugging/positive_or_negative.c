#include "main.h"
/**
 * positive_or_negative - prints if the value is zero or positive or negative.
 * @i: an integer.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positif \n", i);
	else if (i < 0)
		printf("%d is negatif \n", i);
		else
			printf("%d is zero \n", i);

}
