#include <stdio.h> 
#include <stdlib.h> 
#include "SampleLib.h" 
int main( void ) { 
/*int result = power( 2, 3 ); 
printf( "2³ == %d\n", result ); 
result = fact( 6 ); 
printf( "6! == %d\n", result ); 
return EXIT_SUCCESS;*/

//permutation suite//
 int x = 10, y = 20;
    
    printf("Avant permutation : x = %d, y = %d\n", x, y);
    
    permutation(&x, &y);
    
    printf("Après permutation : x = %d, y = %d\n", x, y);
    
    return 0;
}

