#include <stdio.h>
#include <string.h>

int trim(char s[]);
main(){
    char t[]= "test  te     ";
    printf("%send\n",t);
    trim(t);
    printf("%send\n",t);
}
//删除字符串尾部的空格符/制表符/换行符
int trim(char s[]){
    int n;

    for ( n = strlen(s) - 1 ; n >= 0; n--)
    {
        if(s[n] != ' ' && s[n] != '\t' && s[n] != '\n') break;
    }
    s[n+1] = '\0';
    return n;
}