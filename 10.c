/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void cubeByReference(int *nPtr);

int main(void)
{
    int number =5;
    printf("The original value of number is %d", number);
    
    cubeByReference(&number);
    
    printf("\nThe new value of number is %d\n",number);
    system("pause");
    return 0;
}

void cubeByReference(int *nPtr)
{
    *nPtr= *nPtr * *nPtr * *nPtr;
}
