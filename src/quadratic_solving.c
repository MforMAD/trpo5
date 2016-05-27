#include "quadratic_solving.h"

#include <math.h>

Quad_root quad_solve(float a, float b, float c)
{
	Quad_root answer;

	if (a == 0) {
		answer.count = WRONG_INPUT;
		return answer;
	}

	const float d = b * b - 4 * a * c;

	if (d < 0) {
		answer.count = ZERO_ROOTS;
	} else {
		answer.count = TWO_ROOTS;
		answer.x1 = (-b + sqrt(d)) / (2 * a);
		answer.x2 = (-b - sqrt(d)) / (2 * a);
	}

	return answer;
}