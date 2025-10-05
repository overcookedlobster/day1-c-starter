#include <stdio.h>
#include <math.h>  // for fabs
#include "../q3_power/power.h"

int main() {
    int passed = 0;
    int total = 6;

    float tolerance = 0.001f;  // For floating point comparison

    // Test 1: Basic power calculation
    float p1 = calculate_power(2.0f, 1.0f);
    if (fabs(p1 - 2.0f) < tolerance) passed++;

    // Test 2: Power calculation at limit
    float p2 = calculate_power(3.3f, 1.515f);  // Approx 5W
    if (fabs(p2 - 5.0f) < tolerance) passed++;

    // Test 3: Safe power
    if (is_power_safe(4.0f) == 1) passed++;

    // Test 4: Unsafe power
    if (is_power_safe(6.0f) == 0) passed++;

    // Test 5: Exact limit
    if (is_power_safe(5.0f) == 1) passed++;

    // Test 6: Zero power
    float p6 = calculate_power(0.0f, 0.0f);
    if (fabs(p6 - 0.0f) < tolerance && is_power_safe(0.0f) == 1) passed++;

    printf("passed: %d\n", passed);
    printf("total tests: %d\n", total);

    if (passed == total) {
        printf("✓ all tests passed!\n");
    }

    return 0;
}

