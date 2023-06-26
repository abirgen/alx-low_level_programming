#include "main.h"

/*
 * Task: 1. Don't swap horses in crossing a stream
 * Creator: Jared Naicker
 */

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
