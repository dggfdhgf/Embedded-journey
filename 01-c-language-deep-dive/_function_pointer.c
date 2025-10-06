#include"stdio.h"//模拟简单计算器实现
typedef int(*operation_func_t)(int, int);//函数指针，指向相应运算函数
int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

void main() {
    int key,a,b,result;
	operation_func_t operation_table[]={add,sub,mul,divide};//函数指针数组
    scanf("%d %d %d",&key,&a,&b);//模拟键盘输入
    result=operation_table[key](a,b);
}
