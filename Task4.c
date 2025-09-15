#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {
    float radius;
    float area;
    float circumference;
    float square;

    // Input radius
    printf("Radius of the tank: ");
    scanf("%f", &radius);

    // Calculate area
    area = M_PI * radius * radius;
    printf("The area is: %.2f\n", area);

    // Calculate circumference
    circumference = 2 * M_PI * radius;
    printf("The circumference is: %.2f\n", circumference);

    // Calculate square root of radius
    square = sqrt(radius);
    printf("The square root of radius is: %.2f\n", square);

    return 0;
}

