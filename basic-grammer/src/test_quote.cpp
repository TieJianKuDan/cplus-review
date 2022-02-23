/**
 * 程序功能: 测试 引用 传值 
 * 运行结果: 
 */

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

}

int main()
{
	int a = 2, b = 3;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(a, b);
	cout << "=======" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

