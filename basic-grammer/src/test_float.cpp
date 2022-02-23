/**
 * 程序功能: 测试浮点常量的表示 
 * 运行结果: 小数形式必须要有小数部分，指数形式必须要有小数或整数部分+指数 
 */

#include <iostream>
using namespace std;

int main()
{
	double a = 1.e-3;
	double b = 1e-3;
	double c = .1e-3;
	double d = .5f;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
}

