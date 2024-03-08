#include<stdio.h>
int main (){
    int x,y,n,sum=1;
    printf("number : ");
    scanf("%d",&x);
    printf("power : ");
    scanf("%d",&n);
    for (y=1; y<=n; y++){
        printf("%d",x);
        printf("\n");
        sum=sum*x;
    }
    printf("the sum of X^n  : \n");
    printf("%d\n",sum=sum);
    return 0;
}
