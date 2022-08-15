//cosinusul unghiului format de 2 vectori
//produsul scalar (x = a1*b1+a2*b2+....)
//produsul scalar este = modul_vectA x modul_vectB x cos
//deci cos = x/(modul_vectA x modul_vectB)
#include <stdio.h>
#define LMAX 100
float a[LMAX],b[LMAX];

int main(){
    int n,i;
    float x,modA,modB,cosAB;
    printf("n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("b[%d] = ",i);
        scanf("%f",&b[i]);
    }
    x = 0.0f;
    modA = 0.0f;
    modB = 0.0f;
    cosAB = 0.0f;
    for (i=1;i<=n;i++){
        x += a[i]*b[i];
        modA += a[i]*a[i];
        modB += b[i]*b[i];
        cosAB = x/(modA*modB);
        if (x == 0)
            cosAB = 0;
        if (modA == 0 || modB == 0)
            cosAB = 0;
    }
    printf("%f\n",cosAB);
    return 0;
}
