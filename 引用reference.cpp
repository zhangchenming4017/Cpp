#include<iostream>
using namespace std;

int main() 
{
	//*** (普通)引用的定义 ***
	const int two = 2;
	int a = 10, b = 20;
	int& ref = a;  //ref 是 a的引用
	//int& ref2;   //错误，引用必须初始化
	//int& ref2 = 10;  //不能创建字面值常量的引用
	//int& ref2 = two;   //不能用普通引用去绑定常量
	cout << "ref = " << ref << endl;   //ref等于a的值

	cout << "a的地址：" << &a << endl;
	cout << "ref的地址：" << &ref << endl;  //ref 和 a的地址完全一样
	//引用本质上就是一个别名，它本身不是数据对象，所有本身不会存储数据，而是和初始变量值绑定，绑定之后不可更改
	
	ref = b;
	cout << "a = " << a << endl; //a为20

	//** 引用的引用 **
	int& rref = ref;
	rref = 25;
	cout << "a = " << a << endl; //a为25

	//*** 常量引用 ***
	const int zero = 0;
	const int& cref = zero; //常量的引用
	//cref = 10;  //错误，不能对常量赋值
	const int& cref2 = 10;  //正确，可以用字面值常量做初始化
	int i = 35;
	const int& cref3 = i;  //正确，可以用一个变量做初始化
	double d = 3.14;
	const int& cref4 = d;  //正确，d会先转化成int类型，引用绑定的是一个“临时量”
	//常量引用和普通引用的引用不同，它的初始化要求宽松很多，只要是可以转化成它指定类型的所有表达式，都可以用来初始化。
	
	//*** 绑定指针的引用 ***
	int* ptr = &a;
	int*& pref = ptr;
	*pref = 100;
	cout << "a = " << a << endl; //a为100
	
	//没有指向引用的指针
	//int&* rptr = &ref;   //错误，引用不是数据对象

}