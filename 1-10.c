#include <stdio.h>
//将输入的制表符替换为\t 回退符替换为\b
int main(int argc, char const *argv[])
{
    int c = getchar();
    while (c != EOF)
    {
        if(c == 9 || c == 11){
            printf("\\t");
        }
        if(c == 8){
            printf("\\b");
        }

        putchar(c);
        c = getchar();
    
    }
    
    return 0;
}
