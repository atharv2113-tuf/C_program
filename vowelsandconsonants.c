#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    ch = tolower(ch); 

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Consonant\n");
    } else {
        printf("Not an alphabet\n");
    }
    return 0;
}
