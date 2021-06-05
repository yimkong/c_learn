#include <stdio.h>
//将输入中的制表符替换成适当数量的空格
#define COLUMN_LENGTH 1 //替换的空格的长度

main()
{
    int c, start = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            for (int j = 0; j < COLUMN_LENGTH; j++)
            {
                putchar(' ');
            }
        }
        else
        {
            putchar(c);
        }
    }
}