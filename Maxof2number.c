#include<stdio.h>

int main(){
    int num1,num2;
             printf("Please enter first numbers : ");
            scanf("%d",&num1);
            printf("Please enter second numbers : ");
             scanf("%d",&num2);
    if(num1>num2)
             printf("%d is maximum", num1 );
    else
             printf("%d is maximum", num2);
    return 0;
}