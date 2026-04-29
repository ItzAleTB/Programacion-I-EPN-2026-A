/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

    int res,a=10,b=20;
    
    res=a++ + ++a - --b + b--;
    
    printf("El resultado de la resta es = %d\n", res);
    
    printf("Los valores final de a y b son = %d y %d\n", a,b);

    return 0;
}