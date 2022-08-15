//citim 2 vectori de acceasi lungime
//produsul scalar (x = a1*b1+a2*b2+....)
#include <stdio.h>
#define LUNG 20
float a[LUNG + 1], b[LUNG + 1];
int main(){
    int n,i;
    float x;
    //stabilim cate elem are fiecare vector
    printf("n = ");
    scanf("%d",&n);
    //citim elem vect a
    for (i=1;i<=n;i++){
        printf("a[%d] = ",i);
        scanf("%f", &a[i]);
    }
    //citim elem vect b
    for (i=1;i<=n;i++){
        printf("b[%d] = ",i);
        scanf("%f", &b[i]);
    }
    //calculam produsul scalar
    x = 0.0f;
    for (i=1;i<=n;i++)
        x +=a[i]*b[i];
    printf("Produsul scalar este: %f\n",x);
}
