#include "quadratic_solving.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 4) {
		fprintf(stderr, "Missing arguments\n");
		exit(EXIT_FAILURE);
	}

	const double a = atof(argv[1]);
	const double b = atof(argv[2]);
	const double c = atof(argv[3]);

	Quad_root result;

	result = quad_solve(a, b, c);

	if (result.count > 0) {
		printf("x1 = %lf x2 = %lf\n", result.x1, result.x2);
	} else if (result.count == 0) {
		printf("No real roots\n");
	} else {
		printf("Coef a = 0\n");
	}

	return EXIT_SUCCESS;
}