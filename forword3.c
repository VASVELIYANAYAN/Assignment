
#include <stdio.h>
#include<conio.h>
void main() {
    int n, i, j;
    float x[10], y[10][10], xi, h, u, result,term=1;
    clrscr();
    printf("Enter number of data points: ");
    scanf("%d", &n);
    
    printf("Enter x values:\n");
    for(i = 0; i < n; i++) 
     {
        scanf("%f", &x[i]);
    } 
    
    
    
    

    printf("Enter y values:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%f", &y[i][0]); 
    }
    
    
    
    

    
    for(j = 1; j < n; j++)   
    
    
    
    {
        for(i = 0; i < n - j; i++) 
        
        
        
        
        {
            y[i][j] = y[i+1][j-1] - y[i][j-1];
            
            
            
            
            
            
            
            

            
            
        }
    }
    printf("Enter value of x to interpolate: ");
    scanf("%f", &xi); 

    h = x[1] - x[0];
  
    u = (xi - x[0]) / h;
  
    result = y[0][0]; 

    
    for(i = 1; i < n; i++)  
    {
        term = term * (u - (i - 1)) / i;
        
        
        
        
        
        
        result = result + term * y[0][i];
        
        
        
        

    }

    printf("Interpolated value at %.2f = %.4f\n", xi, result);
    getch();
}