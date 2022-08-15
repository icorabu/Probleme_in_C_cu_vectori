//cautarea unui numar dat intr-o lista de n nr reale
#include <stdio.h>
#define LMAX 200
float a[LMAX];

int main(){
    int n,i,cont;
    float x;
    printf("n = ");
    scanf("%d",&n);
    printf("x = ");
    scanf("%f",&x);
    for(i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%f",&a[i]);
    }
    cont = 0;
    for(i=0;i<n;i++){
        if (x==a[i])
            cont++;
    }
    if (cont == 0)
        printf("Numarul x=%f nu este in sir\n",x);
    else
        printf("Numarul x=%f este in sir\n",x);
    
    return 0;
}
