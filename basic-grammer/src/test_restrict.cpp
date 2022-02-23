/**
 * 程序功能: 测试 restrict 修饰符 
 * 运行结果: restrict 对于不同编译器有不同的写法，如这里是 __restrict__
 * 	     restrict 仅仅是向编译器打包票，指针所指向的变量肯定没有其他
 * 	     指针能够修改，所以编译器并没有检查这个承诺的真假就做优化
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int * __restrict__ p1 = (int *) malloc(sizeof(int));
	int * p2 = p1;
	*p2 = 5;
	cout << *p1 << endl;
}

