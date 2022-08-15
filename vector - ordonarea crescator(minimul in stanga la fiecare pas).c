//ordonarea crescator a unui vector citit de la tastatura
//la fiecare parcurgere aflam minimul si-l punem in stanga
#include <stdio.h>
#define LUNG 50
int a[LUNG];
int main(){
    int n,i,j,aux;
    //stabilim cate elem are vect
    printf("n = ");
    scanf("%d",&n);
    //citim elem vect
    for (i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    //la fiecare parcurgere aflam minimul si-l punem in stanga
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if (a[i]>a[j]){
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
    for (i=0;i<n;i++)
        printf("%d", a[i]);
    
    printf("\n");
    
    return 0;
    
}

