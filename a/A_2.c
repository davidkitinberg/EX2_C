#include <stdio.h>
#include "A_2.h"


#define N 50

// Function to input grades for students
void inputGrades(int grades[]) {
    for (int i = 0; i < N; i++) {
        printf("Enter grade for student #%d: ", i + 1);
        scanf("%d", &grades[i]);
    }
}

// Function to calculate the average grade
double calculateAverage(int grades[]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += grades[i];
    }
    return (double)sum / N;
}

// Function to print grades above the average
void printAboveAverage(int grades[], double average) {
    printf("Grades above the average:\n");
    for (int i = 0; i < N; i++) {
        if (grades[i] > average) {
            printf("Student #%d: %d\n", i + 1, grades[i]);
        }
    }
}