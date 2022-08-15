//citirea a doi vectori cu aceeasi lungime
//suma, element cu element
#include <stdio.h>
#define LUNG 20
float a[LUNG+1],b[LUNG+1],c[LUNG+1];
int main(){
    int n,i;
    //stabilim cate elem au vectorii
    printf("n = ");
    scanf("%d",&n);
    // citim elementele vectorului a
    for (i=1;i<=n;i++){
        printf("a[%d] = ",i);
        scanf("%f",&a[i]);
    }
    // citim elementele vectorului b
    for (i=1;i<=n;i++){
        printf("b[%d] = ",i);
        scanf("%f",&b[i]);
    }
    //calculam suma, adica vectorul c
    for (i=1;i<=n;i++){
        c[i] = a[i] + b[i];
        printf("%f ",c[i]);
    }
}
