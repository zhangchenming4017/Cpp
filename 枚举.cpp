#include<iostream>
using namespace std;

//定义枚举类型
//相当于一种批量创建符号常量的方式，可以替换const。
enum week
{
	Mon, Tue, Wed, Thu = 10, Fri, Sat, Sun
};
//默认情况下，会将整数值赋给枚举量； 枚举量从0开始，每个枚举量依次加一；
//可以通过对枚举量赋值，显式地设置每个枚举量的值

int main()
{
	week w1 = Mon;
	// week w2 = 2; //错误的，不能将整数类型直接赋给枚举量，虽然枚举量的值默认为整数类型
	
	week w2 = week(2);  //C++函数风格的强制类型转换，int类型强转为week类型后赋值
	
	cout << "w1 = " << w1 << endl;
	cout << "w2 = " << w2 << endl;

	//已知Thu=10 那么Wed和Fri会是多少
	week w3 = Wed;
	week w5 = Fri;
	cout << "w3 = " << w3 << endl; //结果为2
	cout << "w5 = " << w5 << endl; //结果为11
	//所以对其中一个枚举量定义后，其后的枚举量以它的值继续连续加一
}