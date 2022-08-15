//numarul elementelor divizibile cu 3
#include <stdio.h>
#define LMAX 100
int a[LMAX];

int main(){
    int n,i,nr_elem;
    printf("n = ");
    scanf("%d", &n);
    for (i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    nr_elem = 0;
    for (i=0;i<n;i++){
        if (a[i]%3 == 0)
            nr_elem++;
    }
    printf("%d\n", nr_elem);
    return 0;
}
