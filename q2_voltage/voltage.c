/*
 * Day 1 Exercise 2: Voltage Validator
 *
 * TODO: Implement a program that reads a voltage value
 * and checks if it's within the valid range (1.8V - 3.3V).
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -o voltage voltage.c
 * Run with: ./voltage
 */

#include <stdio.h>
#include "voltage.h"

/**
 * Checks if the given voltage is within valid range (1.8V - 3.3V)
 * @param voltage The measured voltage
 * @return 1 if valid, 0 if invalid
 */
int is_valid_voltage(float voltage) {
    return (voltage >= 1.8f && voltage <= 3.3f) ? 1 : 0;
}

#ifndef UNIT_TEST
int main(void) {
    float voltage_min = 1.8f;
    float voltage_max = 3.3f;
    float measured_voltage;

    printf("Voltage Validator for Post-Silicon Testing\n");
    printf("Valid range: %.1fV to %.1fV\n", voltage_min, voltage_max);

    // Read input and validate
    printf("Enter measured voltage: ");
    if (scanf("%f", &measured_voltage) == 1) {
        if (is_valid_voltage(measured_voltage)) {
            printf("Voltage %.2fV is VALID.\n", measured_voltage);
        } else {
            printf("Voltage %.2fV is INVALID.\n", measured_voltage);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
#endif

