/**
 * 程序功能: 基本数据类型占有多少字节 
 * 运行结果:  
 */

#include <iostream>
using namespace std;

int main()
{
	// 除了 void 有 6 种基本数据类型
	cout << "bool: " << sizeof(bool) << "字节" << endl;
	cout << "char: " << sizeof(char) << "字节" << endl;
	cout << "int: " << sizeof(int) << "字节" << endl;
	cout << "float: " << sizeof(float) << "字节" << endl;
	cout << "double: " << sizeof(double) << "字节" << endl;
	cout << "wchar_t: " << sizeof(wchar_t) << "字节" << endl;
	
	// 基本数据类型添加修饰符
	cout << "signed int: " << sizeof(signed int) << "字节" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << "字节" << endl;
	cout << "short int: " << sizeof(short int) << "字节" << endl;
	cout << "long int: " << sizeof(long int) << "字节" << endl;
	// cout << "unsigned float: " 
	// 	<< sizeof(unsigned float) 
	// 	<< "字节" << endl; // 浮点数没有无符号的规定【报错】
	// cout << "long float: " 
	// 	<< sizeof(long float) 
	// 	<< "字节" << endl; // long float 没有这个说法【报错】
	cout << "long double: " << sizeof(long double) << "字节" << endl;
	// cout << "long long double: " 
	// 	<< sizeof(long long double) 
	// 	<< "字节" << endl; // 【报错】
	cout << "long long int: " 
	     << sizeof(long long int) 
	     << "字节" << endl; // long long int 占 8 个字节
}

