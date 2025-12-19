#include <stdio.h> 
#include <stdlib.h> 
#include "bibliothèque.h" 
int main( void ) { 
/*int result = power( 2, 3 ); 
printf( "2³ == %d\n", result ); 
result = fact( 6 ); 
printf( "6! == %d\n", result ); 
return EXIT_SUCCESS;*/

//permutation suite//
 int x = 50, y = 29;
    
    printf("Avant permutation : x = %d, y = %d\n", x, y);
    
    permutation(&x, &y);
    
    printf("Après permutation : x = %d, y = %d\n", x, y);
    
// eercice
    
    int choix;
    
    printf("\n=== Menu des exercices ===\n");
    printf("1. Resoudre equation second degre\n");
    printf("2. Tester nombre premier\n");
    printf("3. Distance entre points\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    
    if (choix == 1)
    {
        resoudreEquationSecondDegre();
    }
    else if (choix == 2)
    {
        int n;
        printf("Entrez un nombre : ");
        scanf("%d", &n);
        
        if (estPremier(n))
        {
            printf("%d est premier\n", n);
        }
        else
        {
            printf("%d n'est pas premier\n", n);
        }
    }
    else if (choix == 3)
    {
        struct Point p1, p2;
        
        printf("Point 1 (x y) : ");
        scanf("%f %f", &p1.x, &p1.y);
        printf("Point 2 (x y) : ");
        scanf("%f %f", &p2.x, &p2.y);
        
        float d = distancePoints(p1, p2);
        printf("Distance = %f\n", d);
    }
    else
    {
        printf("Choix non valide\n");
    }
    

    
    return 0;
}