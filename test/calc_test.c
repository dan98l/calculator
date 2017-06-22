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

CTEST(arithmetic_suite, addition)
{
    // Given
    const double a = 2;
    const double b = 2;
    
    // When
    const double result = addition(a, b);
    
    // Then
    const double expected = 4;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, subtraction)
{
    // Given
    const double a = 20;
    const double b = 2;
    
    // When
    const double result = subtraction(a, b);
    
    // Then
    const double expected = 18;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, multiplication)
{
    // Given
    const double a = 2;
    const double b = 9;
    
    // When
    const double result = multiplication(a, b);
    
    // Then
    const double expected = 18;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, division_two)
{
    // Given
    const double a = 2;
    const double b = 0;
    
    // When
    const double result = division(a, b);
    
    // Then
    const double expected = 0;
    ASSERT_EQUAL(expected, result);
}
