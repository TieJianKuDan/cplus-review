/**
 * 程序功能: 测试移位 
 * 运行结果: 对于有符号数 >> 是算数右移 即要保证和除2的结果一 
 * 	     对于无符号数 >> 是逻辑右移 
 */

#include <iostream>
using namespace std;

int main()
{
	int a = -1;
	a = a << 1;
	cout << a << endl;
}

