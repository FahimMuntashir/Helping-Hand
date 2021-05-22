#include <stdio.h>
#include <math.h>

double velocity(double u, double a, double s)
{
    double v = sqrt((u * u) + (2 * a * s));

    return v;
}

int main()
{
    double u, a, s;

    printf("enter the value of u,a and s: ");

    scanf("%lf %lf %lf", &u, &a, &s);

    printf("velocity: %lf\n", velocity(u, a, s));
}