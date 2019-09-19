#include <stdio.h>
int main(){
int x ,chimbs[10], top, i, grandao=0, pos;
for(top=0; top<10; top++){
    scanf("%d", &x);
    chimbs[top]=x;
}
for(i=0; i<10; i++){
    if(chimbs[i]>grandao){
        grandao = chimbs[i];
        pos=i;
    }
}
printf("%d", pos);

return 0;
}

