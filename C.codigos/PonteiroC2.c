/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void adcon(int *px, int *py){
    *px = *px + 10;
    *py = *py + 10;
}

int main()
{
    int x = 4, y = 7;
    adcon(&x, &y);
    printf("O primeiro é %d e o segundo é %d", x, y);
}
