#include <stdio.h>
#include<conio.h>
void main() {
    int n, i, j;
    float x[10], y[10], xp, yp = 0, p;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter data points (x y):\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]); 
    }

    printf("Enter value of x to find y: ");
    scanf("%f", &xp);

    for (i = 0; i < n; i++)
    {
        p = 1;
        for (j = 0; j < n; j++) 
        {
            if (j != i)  
            {
               p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }
        yp = yp + p * y[i];
    }

    printf("Interpolated value at x = %.2f is y = %.4f\n", xp, yp);

    getch();
}