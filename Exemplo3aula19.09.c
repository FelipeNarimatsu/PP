#include <stdio.h>
int main(){
int vetor[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
int i,j,a,b;
int maior=0;
for(i=0;i<2;i++){
    for(j=0;j<5;j++){
      if(maior<vetor[i][j]){
        maior=vetor[i][j];
        a=i;
        b=j;
      }
    }
}

printf("Maior: %d e Pos:%d,%d", maior,a,b);
return 0;
}

