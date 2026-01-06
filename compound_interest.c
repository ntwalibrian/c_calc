#include <stdio.h>
#include <math.h>

int main(){
    double p = 0.0;
    double r = 0.0;
    int t = 0;
    int n = 0;
    double a = 0.0;
    double c_i = 0.0;

    printf("Enter principle (P): ");
    scanf("%lf",&p);

    printf("Enter # of year (t): ");
    scanf("%d",&t);

    printf("Enter # of times compounded per year (n): ");
    scanf("%d",&n);

    printf("Enter interest rate % (r): ");
    scanf("%lf",&r);

    getchar();

    r = r / 100;

    a = p*pow((1 + (r/n)),(n*t));
    c_i = a - p;

    printf("After %d years the total will be %.3lf", t,a);

    return 0;
}