#include <stdio.h>

int main() {
    char a = 'C';
    //char *b = 'C'; // error
    char *b = "C";
    char *ch = "C Language"; 
    char s[] = "Language"; 
    char sentence[] = "Welcome To C!!"; 

    printf("%c\n", a);
    printf("%s\n", b);
    printf("%s\n", ch);
    printf("%s\n", s);
    printf("%s\n", sentence);

    return 0;
}