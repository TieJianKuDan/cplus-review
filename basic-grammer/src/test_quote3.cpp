/**
 * 程序功能: 测试常量引用 
 * 运行结果: 
 */

#include <iostream>
using namespace std;

int main()
{
	int a = 23333;
	const int& q_a = a;
	// q_a += 250; // 【错误】因为 q_a 只读
	a += 250;
	cout << a << endl;
}

