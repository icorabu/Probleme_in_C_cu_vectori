//daca toate elementele unui tablou sunt identice sau nu
#include <stdio.h>
#define LMAX 100
int a[LMAX];

int main(){
    int n,i,count;
    printf("n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    count = 1;//cazul in care sunt egale
    for (i=0;i<n-1;i++){
        if (a[i] != a[i+1])
            count = 0;
    }
    if (count == 1)
        printf("Toate sunt egale.\n");
    else
        printf("Cel putin 1 element este diferit.\n");
    return 0;
}
