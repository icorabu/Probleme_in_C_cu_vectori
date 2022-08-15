//determina valoarea minima dintr-un vector
//afiseaza acest element
//afiseaza pozitia acestui element

#include <stdio.h>
#define LMAX 100
int a[LMAX];

int main(){
    int n,i,min,p;
    printf("n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    min = a[0];
    p = 0;
    for(i=0;i<n;i++){
        if (a[i]<min){
            min = a[i];
            p = i;
        }
    }
    printf("Minimul este %d\n",min);
    printf("Indicele este %d\n",p);
    
    
    return 0;
}
