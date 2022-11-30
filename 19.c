/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b[]={10,20,30,40};
    int *bPtr=b;
    int i;
    int offset;
    
    printf("Array b printed with:\nArray subscipt notation\n");
    for(i=0;i<4;i++)
    {
        printf("b[%d]=%d\n",i,b[i]);
    }
    printf("\nPointer/offset notation where\n"
            "the pointer is the array name\n");
    for(offset=0;offset<4;offset++)
    {
        printf("*(b+%d)=%d\n",offset,*(b+offset));
    }
    printf("\nPointer subscipt notation \n");
    for(i=0;i<4;i++)
    {
        printf("bPtr[%d]=%d\n",i,bPtr[i]);
        
    }
    printf("\nPointer/offset  notation \n");
    for(offset=0;offset<4;offset++)
    {
        printf("*(b+%d)=%d\n",offset,*(b+offset));
    }
    system("pause");
    return 0;
}

