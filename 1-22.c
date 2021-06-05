#include <stdio.h>
#define MAXLINE 5 //行最大长度

//将输入折成多行，行的最大长度为n，折的时候需要考虑空格以及制表符
main()
{
    int c, count = 0;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        count++;
        if (count == MAXLINE)
        {
            count = 0;
            putchar('\n');
        }
    }
}