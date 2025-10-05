#include <stdio.h>
#include "../q2_voltage/voltage.h"

int main() {
    int passed = 0;
    int total = 6;

    // Test valid voltages
    if (is_valid_voltage(1.8f)) passed++;
    if (is_valid_voltage(2.5f)) passed++;
    if (is_valid_voltage(3.3f)) passed++;

    // Test invalid voltages
    if (!is_valid_voltage(1.7f)) passed++;
    if (!is_valid_voltage(3.4f)) passed++;
    if (!is_valid_voltage(0.0f)) passed++;

    printf("passed: %d\n", passed);
    printf("total tests: %d\n", total);

    return (passed == total) ? 0 : 1;
}

