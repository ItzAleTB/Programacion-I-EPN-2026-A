/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=5,b=0;
    
    printf("a = b: %u\n",b=a);
    
    printf("a += b: %u\n",b+=a);
    
    printf("a -= b: %u\n",b-=a);
    
    printf("a *= b: %u\n",b*=a);
    
    printf("a /= b: %u\n",b/=a);
    
    printf("a %= b: %u\n",b%=a);
    
    printf("a &= b: %u\n",b&=a);
    
    printf("a |= b: %u\n",b|=a);
    
    printf("a ^= b: %u\n",b^=a);
    
    printf("a >>= b: %u\n",b>>=a);
    
    printf("a <<= b: %u\n",b<<=a);

    return 0;
}