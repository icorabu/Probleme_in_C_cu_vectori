//susecventa maxima a unui sir
#include <stdio.h>
#define LMAX 100
int a[LMAX];
int main(){
    int n,i,j,k;
    int suma;//suma partiala
    int smax;//suma partiala maxima
    int left;//indicele primului element al smax
    int right;//indicele ultimului element al smax
    //stabilim cate elemente are vectorul
    printf("n = ");
    scanf("%d",&n);
    //citim elem vectorului
    for (i=1;i<=n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    smax = a[1];
    left = right = 1;
    for(i=1;i<=n;i++){
        for (j=1;j<=n;j++){
            //calculam suma partiala
            suma = 0;
            for (k=i;k<=j;k++){
                suma += a[k];
            }
            //stabilim suma maxima dupa ce am calculat suma partiala
            if (suma>smax)
            {
                smax = suma;
                left = i;
                right = j;
            }
        }
    }
    printf("%d\n",smax);
    printf("%d %d\n",left,right);
    
    return 0;
}
