
#include <stdio.h>
#include<conio.h>
void main() 
{
    int n, i, j;
    float X[10], Y[10][10], xi, h, u, result, term=1;

    printf("Enter number of data points:  ");
    scanf("%d", &n);

    printf("Enter x values:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &X[i]);
    }

    printf("Enter y values:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &Y[i][0]);
    }

    for(j = 1; j < n; j++)
    {
        for(i = n-1; i >= j; i--) 
        {
            Y[i][j] = Y[i][j-1] - Y[i-1][j-1];
        }
    }

    printf("Enter value of x to interpolate: ");
    scanf("%f", &xi);

    h = X[1] - X[0];
    u = (xi - X[n-1]) / h; 
    result = Y[n-1][0];
    for(i = 1; i < n; i++)
    {
        term = term * (u + (i - 1)) / i;

        result = result + term * Y[n-1][i];
    }
    printf("Interpolated value at %.2f = %.4f\n", xi, result);

    getch();
}