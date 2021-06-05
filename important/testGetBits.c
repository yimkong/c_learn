#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

main(){
    // 1101 => 2的3次方+2的2次方+1
    int i = 13;
    int j = getbits(i,3,2);
    printf("%d\n", j);
    //结果为 11 => 3
}
//返回x中从第p位开始的n位
unsigned getbits(unsigned x, int p, int n){
    //很有意思，x >> (p+1-n) 代表将想要的那n位移到最右边
    //~(~0 << n) 代表将最右边的n位用1填补，其他则是0
    return (x >> (p+1-n)) & ~(~0 << n);
}