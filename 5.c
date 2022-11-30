/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int *aPtr;
    
    a=7;
    aPtr = &a;
    
    
    printf("The address of a is %p"
            "\nThe value of *aPtr is %p",&a,aPtr);
    printf("\n\nThe value of a is %d"
            "\nThe value of *aPtr is %d",a,*aPtr);
    printf("\n\nShowing that * and & are complements of"
            "each other\n&*aPtr = %p"
            "\n*&aPtr = %p\n",&*aPtr,*&aPtr);
    system ("pause");
    return 0;
}
