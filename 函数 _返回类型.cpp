#include<iostream>
using namespace std;

// 函数可以通过return语句，终止函数的执行并“返回”函数调用的地方；并且可以给定返回值。
// 返回值的类型由函数声明的“返回类型”决定。
// return语句可以有两种形式：
// return ; // 直接返回，无返回值
// return 表达式 ; // 返回表达式

// *** 无返回值 ***
// 无返回值的函数，相当于就是包装了一组操作的流程
void swap(int& x, int& y)
{
	// 判断两数是否相等，就不做交换直接返回，提高代码效率
	if (x == y) return;
	int t = x;
	x = y;
	y = t;
}

// *** 有返回值 ***
// 但有时候面对庞大的数据类型，返回值时仍然会保存在一个“临时变量”里，会影响效率
/* 所以，以下代码仍然不够完美
string longer_str(const string& str1, const string& str2)
{
	return str1.size() > str2.size() ? str1 : str2;
}
*/
const string& longer_str(const string& str1, const string& str2)
{
	return str1.size() > str2.size() ? str1 : str2;
}

// **结论** 在进行返回值时，函数名（实参1，实参2，……） = (return后的)返回值 
// 对于上方的 longer_str 函数， 返回的是形参str1或者str2的引用；而函数中形参本身又是引用类型，所以最终是实参对象的引用
// 最终因此此函数没开辟新的空间存储临时变量，效率高。
// 但如果返回的是一个函数内部变量的引用，比如：
const string& f()
{
	string str = "test";
	return str;
}
// 这样是不安全的：因为str是函数内部的局部对象，函数执行完成后就销毁；而返回值就是它的引用，相当于引用了一个不存在的对象，这可能导致无法预料的后果

int main()
{
	int a(10), b(25);
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	string str1 = "hello world", str2 = "hello C++";
	cout << longer_str(str1, str2) << endl;

	// *** 返回类对象后连续调用 ***
	// 如果函数返回了一个类的对象，那么我们可以继续调用这个对象的成员函数，这样就形成了“链式调用”，例如：
	cout << longer_str(str1, str2).size() << endl; 
	// “longer_str(str1, str2).size()”相当于一个string类型的引用，可以直接当作一个string对象来使用
	// 调用运算符（“.”），和访问对象成员的点运算符优先级相同，并且满足左结合律，所以链式调用就是从左向右依次调用，代码可读性更高
	// 其实cin，cout的用法类似，输入输出的操作符“<<”,“>>”类似与“.函数”

	// *** 返回数组 ***
	int arr[5]{ 1,2,3,4,5 };
	int* parr[5]; // 指针数组
	int(* ap)[5]; // 数组指针

	int(*fun(int x))[5]; // 函数声明，fun返回值类型为数组指针
	// 层次分析：
	// fun(int x) : 函数名为fun，形参为int类型的x；
	// (* fun(int x)) : 函数返回的结果，可以执行解引用操作，说明是一个指针；
	// (* fun(int x))[5] : 函数返回结果解引用后是一个长度为5的数组，说明返回类型是数组指针；
	// int(* fun(int x))[5] ： 数组中的元素为int；


	// 简化函数声明
	typedef int Farr[5]; // Farr是一个自定义的类型别名，表示长度为5的int数组
	Farr* fun2(int x);   // fun2的返回值类型是指向Farr的指针

	// 尾置返回类型
	auto fun3(int x) -> int (*) [5]; // 因为返回类型放在末尾，所以前面的类型用了自动推断的 auto；
}
