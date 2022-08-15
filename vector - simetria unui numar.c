//verificam daca un numar natural este simetric
//un nr natural este simetric atunci cand citit invers este egal cu nr initial

#include <stdio.h>
#define LMAX 200
int v[LMAX];

void main(){
    int i,j,k;
    long n,nr;
    printf("n = ");
    scanf("%ld",&n);
    //aflam cifrele numarului cu restul impartirii la 10
    //punem cifrele intr-un vector
    nr = n;
    k=0;
    while (nr!=0){
        v[k] = nr%10;
        nr = nr/10;
        k++;
    }
    i=0;
    j=k-1;
    while( (i<j)&&(v[i]==v[j]) ){
        i++;
        j--;
    }
    if (i>=j)
        printf("Numarul %ld este simetric.\n",n);
    else
        printf("Numarul %ld nu este simetric.\n",n);
    
    
}
