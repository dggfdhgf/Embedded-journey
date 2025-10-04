#include<stdio.h>
#include<stdlib.h>
int IsPrime(int a) {
    if (a < 2) return 0;
    if (a == 2)return 1;
    for (int i = 2; i*i < a; i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}
void analyze_array(int* c, int size) {
    int max = *c, min = *c, sum = 0, j = 0, flag = 1;
    int* n = (int*)malloc(size * sizeof(int));
    int* arr = c;
    float a = 0;
    for (int i = 1; i <= size; i++) {
        if (*arr > max)max = *arr;
        if (*arr < min)min = *arr;
        if (IsPrime(*arr) && flag) { j = *arr; flag = 0; }
        sum = sum + *arr;
        *(n + size - i) = *arr;
        arr++;
    }
    a = sum / size;
    printf("最大值为%d\n", max);
    printf("最小值为%d\n", min);
    printf("平均数为%f\n", a);
    if (flag == 0) printf("第一个质数为%d\n", j);
    else printf("数组中不存在质数");
    printf("逆序后数组为");
    for (int i = 0; i < size; i++)
        printf("%d ", *(n + i));
    free(n);
}
void main(void) {
    int a[5] = { 1,6,-14,7,21 };
    int size = 5;
    analyze_array(a, size);
}



  
