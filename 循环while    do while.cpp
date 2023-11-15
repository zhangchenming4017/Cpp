#include<iostream>
using namespace std;

int main()
{
	cout << "循环开始……\n" << endl;
	//定义循环变量
	int i = 1;
	while (i <= 10)
	{
		cout << "hello world" << endl;
		cout << "现在是第" << i++ << "次循环\n" << endl;  //此处用i++可以简化代码
	}
	cout << "——————————————————————————————" << endl;
	do
	{
		cout << "goodbye world" << endl;
		cout << "现在是倒数第" << --i << "次循环\n" << endl;
	} while (i > 1);



}