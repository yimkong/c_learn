#include <stdio.h>
//将字符串t连接到字符串s的尾部，s必须有足够大的空间
void strcat0(char s[], char t[]);
main(){
    char s[] = {'a','z','i', '\0'};
    
    char t[] = {'k', 'k', '\0'};
    strcat0(s, t);
    printf("%s\n", s);
}

void strcat0(char s[], char t[]){
    int i, j;
    i = j = 0;
    while(s[i] != '\0')
        i++;
    while((s[i++] = t[j++]) != '\0')
        ;
}