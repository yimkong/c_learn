#include <stdio.h>
//复制输入到输出并且将连续的空格处理成一个空格
int main(int argc, char const *argv[])
{
    int c;
    int last = 0;
    c = getchar();
    while (c != EOF)
    {
        // printf("%d\n", c);
        if(c == 32 && last == 32){  
        } else{
            putchar(c);
        }
        last = c;
        c = getchar();
    } 
    
    return 0;
}
