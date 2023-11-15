#include<iostream>
#include<string>
using namespace std;

// *** 内联函数 & 默认实参***
inline string stuinfo(string name, int age = 18, double score = 69)
{
	string info = "学生姓名：" + name + "\t年龄：" + to_string(age) + "\t分数：" + to_string(score);
	return info;
}

// *** 函数重载 ***
string stuinfo(string name, int age, string gender)
{
	string info = "学生姓名：" + name + "\t年龄：" + to_string(age) + "\t性别：" + gender;
	return info;
}

// ** const参数的重载测试 **
void fun(int x)
{
	cout << x << endl;
}

// 常量作为形参，跟不加const完全等价
//void fun(const int x)
//{
//	cout << x << endl;
//}

// 函数重载时，如果是传值参数，编译器只会识别传入实参的类型，无论是int类型的变量还是常量都可以给int类型的变量和常量进行赋值

// 同理
void fun2(int* p){}
// void fun2(int* const pc){} 
//这种情况下，const不会影响传入函数的实参类型，所以跟不加const的定义是一样的；
//这叫做“顶层const”。这时两个函数相同，无法进行函数重载。

//另一种情况则不同，那就是传引用参数。这时如果有const修饰，就成了“常量的引用”；对于一个常量，只能用常量引用来绑定，而不能使用普通引用
void fun3(int& x) { cout << 1 << endl; }
void fun3(const int& x) { cout << 2 << endl; }	// 形参类似是常量引用，这是一个新的函数
// 如果实参是一个常量，那么调用的是下面常量引用做形参的函数；但如果实参是一个变量，优先调用上面不带const的函数，这样编译器就能区分这个两个函数

// 类似的，对于一个常量的地址，只能由“指向常量的指针”来指向它，而不能使用普通指针
void fun4(int* p){}
void fun4(const int* cp){}	//形参类型是指向常量的指针，这是一个新的函数

// 在上面两种情况（“常量的引用”，“指向常量的指针”）下，const限制了访问的数据对象是常量，这叫做“底层const”

int main()
{
	cout << stuinfo("张三", 18, 69.5) << endl;
	cout << stuinfo("李四", 19) << endl;
	// cout << stuinfo("王五", , 69.5) << endl; 错误的写法
	// cout<<stuinfo(,,70) 错误的写法
	cout << stuinfo("小美", 20, "武装直升机") << endl;

	int i = 1;
	const int j = 1;
	fun3(i);	//输出为“1”调用的是“void fun3(int& x) { cout << 1 << endl; }”
	fun3(j);	//输出为“2”调用的是“void fun3(const int& x) { cout << 2 << endl; }”
}