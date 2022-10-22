#include<stdio.h>
int main(){
    int i,j,n,count = 0,z;
    scanf("%d%d", &n, &j);
    for(i=0;i<n;i++){
        scanf("%d", &z);
        if(z%j==0)
            count++;
        
    }
    printf("%d", count);
    return 0;
}
