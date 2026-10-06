#include <stdio.h>
#include <math.h>  


double f(double x) {
    return exp(x);
}


double simpsons_one_third(double a, double b, int n) 
{
	int i;
	double h, sum,x;
	h = (b - a) / n;  
    
	sum = f(a) + f(b);  
    
    
    
    
    for (i = 1; i < n; i++)  
    {
	    x = a + i * h;
        
        
        
        
        
	if (i % 2 == 0) {
	    sum += 2 * f(x); 
        
        
        

       
       
       

	} else {
	    sum += 4 * f(x);  
        
        
        

        
        
        

        
        
        
	}
    }

    return (h / 3.0) * sum;  
    
    
}

void main() {
    double a, b, result;
    int n,i;
    clrscr();

    
    printf("Enter lower limit a: ");
    scanf("%lf", &a);  

    printf("Enter upper limit b: ");
    scanf("%lf", &b);  

    printf("Enter number of sub-intervals n : ");
    scanf("%d", &n);   

  

    
    result = simpsons_one_third(a, b, n);
    printf("Approximate value of the integral: %lf\n", result);


    getch();
}


