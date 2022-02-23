/**
 * 程序功能: 测试 lambda 表达式 
 * 运行结果: lambda 实现了匿名类，跟多用法暂略 
 */

#include <iostream>
using namespace std;

void excute(int a, int b, int (* p)(int, int))
{
	cout << "返回值：" << p(a, b) << endl;
}
int main()
{
	int local_v1 = 56;
	int local_v2 = 89;

	// ->int 可以不要
	excute(1, 2, [](int a, int b) ->int {
			cout << "a + b = " << a + b << endl;	
			return a + b;
			});	

	cout << "闭包" << endl;
	//excute(1, 2, [](int a, int b) {
	//		// 并没有捕获外面的局部变量，所以报错！
	//		cout << "local_v1 = " << local_v1 << endl;
	//		cout << "local_v2 = " << local_v2 << endl;
	//		return a + b;	
	//		})
	
	// 即使捕获了也报错，因为只有卜捕获才能转成函数指针
	//excute(1, 2, [=](int a, int b) {
	//		cout << "local_v1 = " << local_v1 << endl;
	//		cout << "local_v2 = " << local_v2 << endl;
	//		return a + b;	
	//		});
}

