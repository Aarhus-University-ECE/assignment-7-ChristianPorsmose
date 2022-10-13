extern "C" {
    #include "taylor_sine.h"
    #include <math.h>
    #include <stdio.h>
}

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    //test for high x, and high n
    double test1 = taylor_sine(15.5, 30);
     printf("test 1\n");
    printf("%f\n", test1);
    printf("%f\n", sin(15.5));

    //test for high x, low n
    double test2 = taylor_sine(15.5, 5);
    printf("test 2\n");
    printf("%f\n", test2);
    printf("%f\n", sin(15.5));
    
    //test for low x, high n
    double test3 = taylor_sine(3, 15);
    printf("test 3\n");
    printf("%f\n", test3);
    printf("%f\n", sin(3));
    

    //test for low x, low n
    double test4 = taylor_sine(3, 1);
    printf("test 4\n");
    printf("%f\n", test4);
    printf("%f\n", sin(3));

    
    //test for same n as test4 but x higher. 
    double test5 = taylor_sine(4, 1);
    printf("test 5\n");
    printf("%f\n", test5);
    printf("%f\n", sin(4));

    /* in general n should be higher than x to get best precision. 
    Also if you keep x low you will better results than entering a high x. */


    return 0;
}