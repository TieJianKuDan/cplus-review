/**
 * 程序功能: 测试static修饰全局变量 
 * 运行结果:  
 */

#include <iostream>
using namespace std;

static int global = 233;

int add(int a, int b)
{
	return a + b;	
}

