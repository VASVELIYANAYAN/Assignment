#include<stdio.h>
#include<math.h>



float f(float x, float y)
{
    return (y - x) / (y + x);
}

int main()
{
    float x0, y0, xn, h, x1, y1;
    int i = 0, n;

    printf("Enter x0, y0, h and xn: ");
    scanf("%f %f %f %f", &x0, &y0, &h, &xn);
    

    
    n = (xn - x0) / h;






    printf("\n------ EULER METHOD ------\n");
    printf("i\t   x\t     y\n");

    printf("%d\t %.4f\t %.4f\n", i, x0, y0);
    
    


    for (i = 1; i <= n; i++) 
    {
        
        
        y1 = y0 + h * f(x0, y0);
        
        
        
        
        

        
        
        
        

        
        
        
        

        

        
        
        

        
        
        
        

        

        
        
        

        
        
        
        

        

        
        
        

        
        
        
        
        x1 = x0 + h;
        
        

        
        

        
        

        
        

        
        
        printf("%d\t %.4f\t %.4f\n", i, x1, y1);
        
        
        
        
        
        x0 = x1;
        
        
        
        
        

        y0 = y1;
        
        
        
        
        


    }

    printf("\nFinal value at x = %.4f is y = %.4f\n", x1, y1);
    

    return 0;
}