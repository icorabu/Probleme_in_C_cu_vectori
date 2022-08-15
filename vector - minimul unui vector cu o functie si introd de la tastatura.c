#include <stdio.h>
int min(int n, int a[]){
    int min,i;
    min = a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]<min)
            min = a[i];
    }
    return min;
}
int main(){
    int n,i,x;
    int b[100];
    printf("Introduceti nr de elem al vectorului: n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("b[%d] = ",i);
        scanf("%d", &b[i]);
    }
    x = min(n,b);
    printf("%d\n",x);
}

