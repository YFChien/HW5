/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int cubeByValue(int n);

int main(void)
{
    int number =5;
    printf("The original value of number is %d", number);
    
    number=cubeByValue(number);
    
    printf("\nThe new value of number is %d\n",number);
    system("pause");
    return 0;
}

int cubeByValue(int n)
{
    return n*n*n;
}
