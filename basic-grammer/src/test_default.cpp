/**
 * 程序功能: 测试函数的默认参数 
 * 运行结果: 拥有默认参数的右边形参必须指定默认参数
 * 	     不能和函数重载发生冲突
 * 	     不要使用函数声明重复指定默认参数
 */

#include <iostream>
using namespace std;

// 函数定义时指定默认参数
void fun1(int a, int b, int c = 10)
{
	cout << "a: " << a << endl;	
	cout << "b: " << b << endl;	
	cout << "c: " << c << endl;	
}
// 产生歧义，编译报错
//void fun1(int a, int b)
//{
//	cout << "a: " << a << endl;	
//	cout << "b: " << b << endl;	
//}

// 函数声明时指定默认参数
void fun2(int, int = 2, int a = 3);
// 同一个作用域内不要重复指定默认参数
// void fun2(int, int = 12, int = 10);

int main()
{
	fun1(1, 2);	
	// 这里没有报错
	void fun2(int, int = 12, int = 10);
	fun2(123);
}

void fun2(int a, int b, int c)
{
	cout << "a: " << a << endl;	
	cout << "b: " << b << endl;	
	cout << "c: " << c << endl;	
}

