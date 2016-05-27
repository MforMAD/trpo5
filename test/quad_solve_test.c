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

CTEST(distance_suite, two_roots_test) {
    // Given
    const float a = 7;
    const float b = 13;
    const float c = 2;

    // When
    const Quad_root result = quad_solve(a, b, c);

    // Then
    const Quad_root expected_result = {-0.169275299 , -1.687867558, TWO_ROOTS};

    ASSERT_EQUAL(expected_result.count, result.count);
    ASSERT_DBL_NEAR(expected_result.x1, result.x1);
    ASSERT_DBL_NEAR(expected_result.x2, result.x2);
}

CTEST(distance_suite, no_real_roots_test) {
    // Given
    const float a = 7;
    const float b = 2;
    const float c = 1;

    // When
    const Quad_root result = quad_solve(a, b, c);

    // Then
    const Quad_root expected_result = {.count = ZERO_ROOTS};

    ASSERT_EQUAL(expected_result.count, result.count);
}