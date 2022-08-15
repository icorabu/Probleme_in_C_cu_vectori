#include <stdio.h>
#define NMAX 200
int a[NMAX];
int main(){
    int min,i,n;
    printf("numarul de elemente n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    min = a[0];
    for (i=1;i<n;i++)
    {
        if (a[i]<min)
            min = a[i];
    }
    printf("Minimul este %d\n",min);

}
