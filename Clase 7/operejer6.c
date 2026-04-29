/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=0,y=5,r;
    
    r = (x++ && ++y)||(y++ && ++x);
    
    printf("El resultado de r es = %d\n", r);
    
    printf("Los valores final de x e y son = %d y %d\n", x,y);

    return 0;
}