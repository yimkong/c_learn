#include <stdio.h>
#define MAXLINE 1000 //允许输入行的最大长度

int getline0(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len;               //当前行长度
    int max;               //最长行长度
    char line[MAXLINE];    //当前输入行
    char longest[MAXLINE]; //保存的最长的行

    max = 0;
    while ((len = getline0(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }
}

//将一行读入到s并返回其长度
int getline0(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
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
//将from copy 到 to，这里假定to足够大
void copy(char to[], char from[]){
    int i;
    i = 0;
    while ((to[i]= from[i]) != '\0')
    {
        ++i;
    }

    
}