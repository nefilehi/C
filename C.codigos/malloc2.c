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
    int i, n;
    float *v;
    float med;
    printf("Quantas notas serão lidas? ");
    scanf("%i", &n);
    //alocação dinamica
    v=(float*) malloc (n*sizeof(float));
    if(v==NULL){
        printf("\n Memoria insuficiente");
        return 1;
    }
    //leitura dos valores
    for(i=0;i<n;i++){
        printf("\nEntre com a nota %i: ", i);
        scanf("%f", &v[i]);
    }
    med = media(n,v);
    printf("Media:%.2f ", med);
    getche();
    //libera a Memoria
    free(v);
    return 0;
}
