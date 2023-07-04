#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getline(char line[], int maxline);
int deletetrailb(char line[], int len);

/* delete trail blanks */
int main()
{
    int len;            /* current line length */

    char line[MAXLINE];      /* current input line*/


    while ((len = getline(line, MAXLINE)) > 0){

        if (deletetrailb(line, len) > 0){
            printf("%s", line);
        }else;
    return 0;
}}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c,i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* delete trail blanks of the line in s[], return length of s[] w/o trail blanks */
int deletetrailb (char s[], int length)
{
    int i;
    for(i = length - 2; (s[i] == ' ') || (s[i] == '\t'); --i)
    {

    }

    if (i >= 0)
    {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}

