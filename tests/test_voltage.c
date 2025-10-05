#include <stdio.h>
#include "../q2_voltage/voltage.h"

int main() {
    int passed = 0;
    int total = 6;

    // Test 1: Minimum valid voltage
    if (is_valid_voltage(1.8f) == 1) passed++;

    // Test 2: Maximum valid voltage
    if (is_valid_voltage(3.3f) == 1) passed++;

    // Test 3: Middle valid voltage
    if (is_valid_voltage(2.5f) == 1) passed++;

    // Test 4: Below minimum
    if (is_valid_voltage(1.7f) == 0) passed++;

    // Test 5: Above maximum
    if (is_valid_voltage(3.4f) == 0) passed++;

    // Test 6: Exact boundary (should pass)
    if (is_valid_voltage(1.8001f) == 1) passed++;

    printf("passed: %d\n", passed);
    printf("total tests: %d\n", total);

    if (passed == total) {
        printf("✓ all tests passed!\n");
    }

    return 0;
}

