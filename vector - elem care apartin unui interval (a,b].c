//afisati elementele dintr-un sir care apartin unui anumit interval (a,b] unde a,b reale
#include <stdio.h>
#define LMAX 200
float vector[LMAX];
float a,b;

void main(){
    int n,i;
    printf("n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("vector[%d] = ",i);
        scanf("%f",&vector[i]);
    }
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    for(i=0;i<n;i++){
        if (a<vector[i]&&vector[i]<=b)
            printf("%f\n",vector[i]);
    }
}
