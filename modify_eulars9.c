#include <stdio.h>
#include <conio.h>

float F(float x, float y)
{
    return (y - x) / (y + x);
}

void main()
{
    float x0, y0, xn, h, x1, y1, yp, k1, k2;
    int i, n;

    clrscr();

    printf("Enter x0, y0, h, xn: ");
    scanf("%f %f %f %f", &x0, &y0, &h, &xn);

    n = (xn - x0) / h;

    printf("\nMODIFIED EULER METHOD\n");

    printf("\n\t x\t\t y\n");
    printf("\t%f\t%f\n", x0, y0);

    for(i = 1; i <= n; i++)
    {
        x1 = x0 + h;

        /* Predictor */
        yp = y0 + h * F(x0, y0);

        /* Corrector */
        k1 = F(x0, y0);
        k2 = F(x1, yp);

        y1 = y0 + (h / 2) * (k1 + k2);

        printf("\t%f\t%f\n", x1, y1);

        x0 = x1;
        y0 = y1;
    }

    printf("\nFinal value at x = %f is y = %f", x1, y1);

    getch();
}