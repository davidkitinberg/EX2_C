#include <stdio.h>
#include "A_2.h"  // Include the header file

int main_a() {
    int grades[N];
    double average;

    // Step A: Input grades for 50 students
    inputGrades(grades);

    // Step B: Calculate and print the average grade
    average = calculateAverage(grades);
    printf("The average grade is: %.2f\n", average);

    // Step C: Print grades above the average
    printAboveAverage(grades, average);

    return 0;
}