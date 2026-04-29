/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    unsigned char c = 255; // uc puede almacenar 0 a 255 (8bit = 256)
    
    // como se realiza un preincremento c toma el valor de 256 el cual no esta
    //dentro del almacenamiento max y al ser un proceso bit a bit este al exeder su
    //maximo se reinicia
    printf("el valor de ++c es = %d\n", ++c);

    return 0;
}