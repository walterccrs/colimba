#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);
void reverse(char line[], int len, char rev[]);

int main(){
    char line[MAXLINE];
    int len;

    while((len = (getline(line, MAXLINE))) > 0){
        char rev[len];
        reverse(line, len, rev);

        printf("%s\n", rev);
    }

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim){
    int c, i;

    for (i = 0; (i<lim-1) && ((c = getchar())!=EOF) && (c!='\n'); ++i){
        s[i] = c;
    }

    s[i] = '\0';

    return i;
}

void reverse(char line[], int length, char rev[]){
    int i;

    for(i = length; i > 0; --i){
        rev[length-i] = line[i-1];
    }

    rev[length] = '\0';
}
