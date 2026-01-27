#include <stdio.h>

int main()
{
    // Circle Calculator Program
    
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    surfaceArea = 4 * PI * radius * radius;
    volume = (4.0/3.0) * PI * radius * radius * radius;
    
    printf("The area is: %.2lf\n", area);
    printf("The surface area is: %.2lf\n", surfaceArea);
    printf("The volume is: %.2lf\n", volume);

    return 0;
}