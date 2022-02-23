/**
 * 程序功能: 测试static修饰全局变量 
 * 运行结果: 被修饰的全局变量作用域仅限当前文件 
 */

#include <iostream>
using namespace std;

int add(int a, int b);

int main()
{
	extern int global;
	cout << global << endl;
	cout << add(2, 3) << endl;
	return 0;
}

