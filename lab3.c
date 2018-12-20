#include <stdio.h>
#include <math.h>
#define M_E 2.718281

 float factorial ( float k )
 {
 	float f = 1;
 	 for( ; k > 0; k-- )
    {
	
 	 	f = f*k;
    }
    return f;
 }
  
  int main (void)
  {
  	double x, y, sn = 0, m= 0, se = 0;
	int n = 1; 
	for( x = 0.1; x <= 1; x += 0.09)
	    {
		  y = (pow( M_E, x) - pow( M_E, -x))/2;
	
		for( n = 0, sn = 0; n <= 20; n++)
			{
			    m = (pow(x,(2*n + 1)))/(factorial(2*n + 1));
			    sn += m; 
			}
			    n = 0;
		    	se = 0;
			
			do
		   {
		    	m = (pow(x,(2*n + 1)))/(factorial(2*n + 1)); 
		   	    se += m;
		   	    n++;
		    }
		    while ( m > 0.0001);
		    
		    printf("  x = %lf , sn = %lf ,  se = %lf , y = %lf \n ", x, sn, se, y) ;
		
		}
		return 0;
	}
