#include <stdio.h>
#include <math.h>

int main(){


    int y = 9;
    float z = 3.14f;
    float x = -9;

    float a = sqrt(y);// returns the square root of x
    printf("The square root of 9 is: %.2f\n", a);

    int b = pow(y, 3); // returns y raised to the power of 3
    printf("9 raised to the power of 3 is: %d\n", b);

    float c = round(z); // rounds x to the nearest integer
    printf("Rounding the result gives: %.2f\n", c);

    float d = ceil(z); // rounds x up to the nearest integer
    printf("Ceiling of 4.2 is: %.2f\n", d);

    float e = floor(z); // rounds x down to the nearest integer
    printf("Floor of 4.8 is: %.2f\n", e);

    float f = abs(x); // returns the absolute value of x
    printf("The absolute value is: %.2f\n", f);

    float g = log(y); // returns the natural logarithm of x
    printf("The natural logarithm is: %.2f\n", g);

    float h = sin(y); // returns the sine of x (x in radians)
    printf("The sine value is: %.4f\n", h);

    float i = cos(y); // returns the cosine of x (x in radians)
    printf("The cosine value is: %.4f\n", i);

    float j = tan(y); // returns the tangent of x (x in radians)
    printf("The tangent value is: %.4f\n", j);

    return 0;
}