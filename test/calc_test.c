#include "../function.h"
#include "../ctest/ctest.h"

CTEST(arithmetic_suite, division)
{
    // Given
    const double a = 2;
    const double b = 2;
    
    // When
    const double result = division(a, b);
    
    // Then
    const double expected = 1;
    ASSERT_EQUAL(expected, result);
}


