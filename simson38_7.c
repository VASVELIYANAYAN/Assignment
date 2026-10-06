#include <stdio.h>
#include <math.h>

double f(double x) {
    return sqrt(x);
}

double simpsons_three_eighth(double a, double b, int n) {
    double h, sum;
    int i;
    h = (b - a) / n;

    sum = f(a) + f(b);

    for (i = 1; i < n; i++) 
    {
        double x = a + i * h;

        if (i % 3 == 0)
            sum += 2 * f(x);

        else
            sum += 3 * f(x);
    }

    return (3 * h / 8) * sum;

}

void main() {
    double a, b, result;
    int n;
    clrscr();

    printf("Enter lower limit a: ");
    scanf("%lf", &a);

    printf("Enter upper limit b: ");
    scanf("%lf", &b);

    printf("Enter number of sub-intervals n (must be multiple of 3): ");
    scanf("%d", &n);

    

    result = simpsons_three_eighth(a, b, n);
    printf("\nApproximate value of the integral = %lf\n", result);

    getch();
}

