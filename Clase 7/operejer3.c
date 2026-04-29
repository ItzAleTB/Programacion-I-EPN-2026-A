/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a=10.0;
    int b=3;
    
    printf("(int) a/b + (float) (a/(int) b) = %f\n", 
    (int)a/b + (float)(a/ (int)b));
    return 0;
}