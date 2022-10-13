#include "taylor_sine.h"
#include <math.h>


double factorial(int x) {
    double sum = 1;
    for (int i = 1; i <= x; i++) {
        sum *= i;
    }
    return sum;
}

double taylor_sine(double x, int n)
{
    int i = 1; //number of elements
    int j = 3; //
    double result = x;

    while(i <= n) {
        
        if(i%2 == 0) {
            result += pow(x,j)/factorial(j);
        }
        else{
            result -= pow(x,j)/factorial(j);
        }
        j += 2;
        i++;
    }

    
    return result;
}
