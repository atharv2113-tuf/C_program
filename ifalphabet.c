#include<stdio.h>
int main (){
    char letter;
    
    printf("Give input: ");
    scanf("%c", &letter);
    
    if(letter>='A' && letter<='Z'){
        printf("It is a alphabet");
    }
    else if(letter>='a' && letter<='z'){
        printf("It is a alphabet");
    }
    
    else
        printf("Its not alphabet");

return 0;
}
