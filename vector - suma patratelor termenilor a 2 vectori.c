//(a1*a1+b1*b1)(a2*a2+b2*b2)...=d*d+c*c
//sum patratelor termenilor a 2 vectori = d patrat + c patrat
#include <stdio.h>
#define MAX 200
int n;
long a[MAX],b[MAX];

void citDate(void){
    int i;
    printf("n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%ld",&a[i]);
        printf("b[%d] = ",i);
        scanf("%ld",&a[i]);
    }
}

void calcule(void){
    int i;
    long p,q;
    long d,e;
    d = a[0];
    e = b[0];
    for(i=1;i<n;i++){
        p = d*a[i]+e*b[i];
        q = d*b[i]-e*b[i];
        d = p;
        e = q;
    }
    printf("d = %ld e = %ld\n",d,e);
}

void main(){
    citDate();
    calcule();
}
