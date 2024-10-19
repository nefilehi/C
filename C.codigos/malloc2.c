#include <stdio.h>
#include <stdlib.h>

float media(int n, float *v){
    int i;
    float s;
    for(i=0; i<n; i++){
        s += v[i];
    }
    return s/n;
}

int main()
{
    int i, n;
    float *v, med;
    printf("Quantas notas serão lidas? ");
    scanf("%i", &n);
    //alocação dinamica
    v=(float*) malloc (n*sizeof(float));
    if(v==NULL){
        printf("\n Memoria insuficiente");
        return 1;
    }
    //leitura dos valores
    else {
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
}
