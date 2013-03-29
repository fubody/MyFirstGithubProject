/*
 * main.c
 *
 *  Created on: 2013-3-28
 *      Author: 8300x64
 */

#include <stdio.h>
#include "tool.h"

int main(int argc, char **argv) {

	printf("hello world!");
	int a, b;
//	scanf("%d %d", a, b);
	a = 1, b = 2;
	printf("(%d + %d) = %d", a, b, add(a, b));
	printf("(%d - %d) = %d", a, b, minus(a, b));
	return 1;

}
