#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;
    scanf("%d", &motorCount);
    scanf("%d", &totalPackageWeight);
    if (motorCount * 12 >= totalPackageWeight) {
        printf("Yes! The conveyor belt can carry the packages.");
    } else {
        printf("No. The conveyor belt cannot carry the packages.");
    }
}