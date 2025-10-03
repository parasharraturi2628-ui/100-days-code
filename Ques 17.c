//Write a program to find the roots of a quadratic equation and categorize them

#include <stdio.h>
#include <math.h>

void findRoots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;
    float root1, root2;

    
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and identical:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main() {
    float a, b, c;

    
    printf("Enter coefficients a, b and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
    } else {
        
        findRoots(a, b, c);
    }

    return 0;
}
