//al doilea cel mai mic numar dintr-o secventa
#include <stdio.h>
#define MAX 200
int a[MAX];


void main(){
    int i,n;
    int min1,min2;
    printf("n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    min1 = a[0];
    for(i=0;i<n;i++){
        if (a[i]<min1)
            min1 = a[i];
    }
    min2 = min1;
    for(i=0;i<n;i++){
        if (min1<a[i])
            if (min2==min1)
                min2 = a[i];
            else
                if (a[i]<min2)
                    min2=a[i];
    }
        if (min1!=min2)
            printf("Al doilea cel mai mic numar este %d.\n",min2);
        else
            printf("Toate numerele sunt identice.\n");
}
