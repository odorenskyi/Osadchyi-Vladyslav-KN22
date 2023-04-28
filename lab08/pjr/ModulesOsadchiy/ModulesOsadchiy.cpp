
#include "main.h"
#include <math.h>
#include <string.h>
double s_calculation(double x,double y,double z)
{   double S=(1/2)*pow(x,2)-sqrt(fabs(pow((y+z),2)-pow(x,5)))-log(fabs(sin(z)));
    return S;

}


