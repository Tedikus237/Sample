#include "bibliothèque.h" 
#include <stdio.h>
#include <math.h>

// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) { 
unsigned int result = 1; 
while ( value > 1 ) { 
result *= value; 
value --; 
} 
return result; 
} 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ) { 
if ( pow == 0 ) return 1; 
if ( pow == 1 ) return value; 
int accumulator = 1; 
while( pow > 0 ) { 
accumulator *= value; 
pow--; 
} 
return accumulator; 
} 

// Définition d'une fonction de permutation//
void permutation(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// devoir

void resoudreEquationSecondDegre()
{
    float a, b, c;
    float delta, x1, x2;
    
    printf("\n=== Resolution equation second degre ===\n");
    printf("Forme : ax^2 + bx + c = 0\n");
    printf("Entrez a : ");
    scanf("%f", &a);
    printf("Entrez b : ");
    scanf("%f", &b);
    printf("Entrez c : ");
    scanf("%f", &c);
    
    delta = b * b - 4 * a * c;
    
    if (delta > 0)
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Deux solutions :\n");
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("Solution double : x = %f\n", x1);
    }
    else
    {
        printf("Pas de solution reelle (delta negatif)\n");
    }
}

int estPremier(int n)
{
    int i;
    
    if (n <= 1)
    {
        return 0;
    }
    
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

float distancePoints(struct Point p1, struct Point p2)
{
    float dx, dy;
    
    dx = p2.x - p1.x;
    dy = p2.y - p1.y;
    
    return sqrt(dx * dx + dy * dy);
}
