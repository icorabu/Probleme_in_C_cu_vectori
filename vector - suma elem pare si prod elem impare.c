//se citesc n elemente naturale
//sa se calculeze suma elementelor pare
//si produsul elementelor impare
#include <stdio.h>
#define MAX_LEN 20
int main(){
    int n,i,s,p;
    int a[MAX_LEN];
    //stabilim cate elemente are vectorul
    printf("n = ");
    scanf("%d",&n);
    //citim elementele vectorului
    for(i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    //initializam suma cu 0 si produsul cu 1
    s = 0;
    p = 1;
    //calculam suma elem pare si prod elem impare
    for (i=0;i<n;i++){
        if (a[i]%2 == 0)
            s += a[i];
        else
            p*=a[i];
    }
    printf("Suma elementelor pare este: %d\n", s);
    printf("Produsul elementelor impare este: %d\n", p);
    return 0;
}
