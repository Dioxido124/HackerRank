#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch;
    char s [30];
    char sen [100];
    
    scanf(" %c", &ch);
    getchar();
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = '\0';
    fgets(sen, sizeof(sen), stdin);
    sen[strlen(sen) - 1] = '\0';

    
    printf("%c", ch);
    printf("\n%s", s);
    printf("\n%s", sen);
    
    return 0;
}