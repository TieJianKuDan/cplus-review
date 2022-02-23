/**
 * 程序功能: 测试 引用 能否再次引向新的内存 
 * 运行结果: 不能，不管是简单数据类型还是复杂的类
 */

#include <iostream>
using namespace std;

class Person 
{
	private:
		int number;
	public:
		void SetNumber(int number)
		{
			this->number = number;
		}	
		int GetNumber()
		{
			return this->number; 
		}

};

int main()
{
	int a = 2333;
	int b = 5555;
	int& q_a = a;
	cout << q_a << endl;
	q_a = b; 		
	cout << a << endl;
	Person p1;
	p1.SetNumber(12);
	Person& q_p1 = p1;
	cout << q_p1.GetNumber() << endl;
	Person p2;
	p2.SetNumber(78);
	q_p1 = p2;
	cout << q_p1.GetNumber() << endl;
	cout << p1.GetNumber() << endl;
}

