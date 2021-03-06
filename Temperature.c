#include <stdio.h>

/*
当fahr = 0, 20, ··· , 300 时,分别打印华氏温度和摄氏温度对照表
*/
main(){
    double fahr, celsius;
    int lower, upper, step;

    lower = 0; // 温度表的下限
    upper = 300; /* 温度表的上限 */
    step = 20; // 步长

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%.0f\t%.1f\n", fahr, celsius );
        fahr = fahr + step;
    }
}