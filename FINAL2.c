#include <stdio.h>
int main(){
int vet[1000];
int x, i, itens,r, j, acc=0, v,acc2=1;
scanf("%d", &v);

while(acc2<=v){


scanf("%d", &x);
for(i=0;i<x;i++){
    scanf("%d", &itens);
    vet[i]=itens;
}
for(r=0;r<x;r++){
    for(j=r+1;j<=x-1;j++){
            if(vet[r]>vet[j]){
                acc++;
        }
    }
}
printf("Teste %d\n", acc2);
printf("%d\n", acc);
acc=0;
acc2++;
}

return 0;
}
