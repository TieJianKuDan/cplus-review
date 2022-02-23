/**
 * 程序功能: 测试一些不常见的转义字符 
 * 运行结果: '\a' 可以让计算机蜂鸣器发声，不过要记得延时，不然听不见 
 */

#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	char A = '\101';
	char a = '\x61';
	cout << A << endl;	
	cout << a << endl;	
	cout << "垂直制表符" << endl;
	cout << '\v' << endl;
	cout << "换页符" << endl;
	cout << '\f' << endl;
	cout << "警报铃声" << endl;
	cout << '\a' << endl;
	sleep(1);
}

