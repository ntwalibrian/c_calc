#include <stdio.h>
#include <math.h>

int main() 
{
    double radius = 0.0;
    double circumferance = 0.0;
    double area = 0.0;
    double surface_area =0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);
    getchar();

    circumferance = 2*PI*radius;
    area = PI*pow(radius,2);
    surface_area = 4*PI*pow(radius,2);
    volume = (4.0/3.0)*PI*pow(radius,3);

    printf("circumferance : %.3lf\n", circumferance);
    printf("Area : %.3lf\n", area);
    printf("Surface Area : %.3lf\n", surface_area);
    printf("Volume : %.3lf\n", volume);
    return 0;

}