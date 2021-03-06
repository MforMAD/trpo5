#ifndef QUADRATIC_SOLVING_H
#define QUADRATIC_SOLVING_H

#define TWO_ROOTS 2
#define WRONG_INPUT -1
#define ZERO_ROOTS 0

typedef struct {
	float x1;
	float x2;
	unsigned int count;
} Quad_root;

Quad_root quad_solve(float a, float b, float c);

#endif