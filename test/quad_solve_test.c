#include <ctest.h>

#include <quadratic_solving.h>

CTEST(quad_solve_suite, koef_a_equal_to_zero_test) {
    // Given
    const float a = 0;
    const float b = 1;
    const float c = 1;

    // When
    const Quad_root result = quad_solve(a, b, c);

    // Then
    const Quad_root expected_result = {.count = WRONG_INPUT};

    ASSERT_EQUAL(expected_result.count, result.count);
}