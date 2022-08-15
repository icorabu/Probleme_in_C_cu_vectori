//verificam daca un vector este simetric
//un vector este simetric atunci cand primul elem este egal cu ultimul
//...al doilea este egal cu penultimul, si tot asa.

#include <stdio.h>
#define LMAX 200
int v[LMAX];

void main(){
    int n,i,j;
    printf("n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);
    }
    i = 0;
    j = n-1;
    while( (i<j) && (v[i]==v[j]) ){
        i++;
        j--;
    }
    if (i>=j)
        printf("Vectorul este simetric.\n");
    else
        printf("Vectorul nu este simetric.\n");
}

