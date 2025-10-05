#include <stdio.h>
#include "../q3_power/power.h"

int main() {
    int passed = 0;
    int total = 6;

    // Test power calculation
    float p1 = calculate_power(2.0f, 2.0f); // 4.0W
    if (p1 == 4.0f) passed++;

    float p2 = calculate_power(1.8f, 2.5f); // 4.5W
    if (p2 == 4.5f) passed++;

    float p3 = calculate_power(3.3f, 1.0f); // 3.3W
    if (p3 == 3.3f) passed++;

    // Test validation
    if (is_valid_power(4.0f)) passed++;
    if (is_valid_power(5.0f)) passed++;
    if (!is_valid_power(6.0f)) passed++;

    printf("passed: %d\n", passed);
    printf("total tests: %d\n", total);

    return (passed == total) ? 0 : 1;
}

