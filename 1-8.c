#include <stdio.h>
//统计空格/制表符/换行符个数
int main(int argc, char const *argv[])
{
    int c = getchar();
    int count = 0;
    while (c != EOF)
    {
        if(c == 32 || c == 10 || c == 9 || c == 11) count++;
        c= getchar();
    }

    printf("result:%d", count);
    
    return 0;
}
