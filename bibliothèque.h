#ifndef __MY_MATH_LIB_H 
#define __MY_MATH_LIB_H 

// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ); 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ); 
void permutation(int *a, int *b);

// devoir
void resoudreEquationSecondDegre();
int estPremier(int n);

struct Point 
{
    float x;
    float y;
};

float distancePoints(struct Point p1, struct Point p2);


#endif 