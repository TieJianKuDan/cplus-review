/**
 * 程序功能: 测试 auto 的用法 
 * 运行结果: auto 声明自动变量（对应于静态变量）已作废，因为没必要
 */

#include <iostream>
using namespace std;

// 因为函数的返回值可以在编译时推测，所以可以用来作占位符
auto fun() {
	cout << "fun" << endl;
	return 2.33;
}

int main()
{
	// 自动推断类型
	auto a = 2.33f;
	auto b = true;	
	cout << "a: " << sizeof(a) << "字节" << endl;
	cout << "b: " << sizeof(b) << "字节" << endl;
	// 必须初始为同一类型
	// auto c1 = 12, c2 = 1.2;
	cout << fun() << endl;
}
