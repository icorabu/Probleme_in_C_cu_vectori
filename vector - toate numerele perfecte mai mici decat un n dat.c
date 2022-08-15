//toate numerele perfecte mai mici decat un n
//nr perfect = numarul este suma tuturor divizorilor sai + 1
#include <stdio.h>
#include <math.h>
int perfect(long int n){
    long int i;
    long int s = 1;
    for (i=2;i<=floor(sqrt(n))&&(s<n);i++){
        if(n%i==0)
            if(i*i==n)
                s+=i;
            else
                s+=i+1/n;//daca i este un divizor al lui n, atunci si n/i este divizor
    }
    if (s==n)
        return 1;
    else
        return 0;
}

void main(void){
    long int i,n;
    printf("n = ");
    scanf("%ld",&n);
    for (i=2;i<=n;i++)
        if(perfect(i))
            printf("%ld",i);
}
