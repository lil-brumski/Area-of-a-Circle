#include <stdio.h>
#include <math.h>

int main() {
    float radius;

    printf("Enter any radius of your choice (in cm): ");
    
    scanf("%f", &radius);
    
    float area = M_PI * pow(radius, 2);
    
    printf("The area of a circle of radius %.2f cm is %.2f cm²", radius, area);
    
    return 0;
}