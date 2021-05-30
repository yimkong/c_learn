#include <stdio.h>
//打印输入单词长度的直方图
main()
{
    int c = getchar(), count = 0;
    int digit[100];
    for (int i = 0; i < 100; i++)
    {
        digit[i] = 0;
    }

    while (c != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (count > 0)
            {
                digit[count] +=1 ;
                count=0;
            }
        }else{
            count++;
        }
        c = getchar();
    }
    int i = 0;
    while (++i < 100)
    {
        if(digit[i] == 0){
            continue;˝
        }
        printf("%3d => ",i);
        for (int j = 0; j < digit[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}