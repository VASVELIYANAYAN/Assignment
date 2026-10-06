
#include <stdio.h>
#include<conio.h>
void main() {
    float x0, y0, x1, y1, x, y;

    printf("Enter first point (x0 y0): ");
    scanf("%f %f", &x0, &y0);
    

    printf("Enter second point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter x to find y: ");
    scanf("%f", &x);
    
    y = y0 + (x - x0)*(y1 - y0)/(x1 - x0);
    
    
    
    
    
    printf("Interpolated value: y = %.2f\n", y);
    getch();
}