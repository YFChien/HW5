/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13],const char *wFace[],const char *wsuit[]);

int main()
{
    const char *suit[4]={"Hearts","Diamonds","Clubs","Spades"};
    
    const char *face[13]=
    {"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
     
    int deck[4][13]={0};
    
    srand(time(0));
    
    shuffle(deck);
    deal(deck,face,suit);
    system("pause");
    return 0;
}
void shuffle(int wDeck[][13])
{
    int row;
    int column;
    int card;
    
    for(card=1;card<=52;card++)
    {
        do
        {
            row=rand()%4;
            column=rand()%13;
        }while(wDeck[row][column] != 0);
        
        wDeck[row][column] = card;
    }
}
void deal(const int wDeck[][13],const char *wFace[],const char *suit[])
{
    int row;
    int column;
    int card;
    
    for(card=1;card<=52;card++)
    {
        for(row=0;row<=3;row++)
        {
            for(column=0;column<=12;column++)
            {
                if(wDeck[row][column] == card)
                {
                    printf("%5s of %-8s%c",wFace[column],suit[row], card % 2 == 0 ? '\n' : '\t' );
                }
            }
        }
    }
}