#include<iostream>
using namespace std;

// 递归是调用自身，如果不加限制，这个过程就不会结束，函数永远调用自己下去，最终会导致栈空间耗尽。
// 所以在递归函数中，一定会存在某种“基准情况”，这个时候不会再调用自身，而是返回结果，基准情况保证了递归能够结束
// 递归和循环很像，事实上，递归可以实现和循环一样的效果，比如求阶乘

// 循环求阶乘
int factorial(int x)
{
	int result = 1;
	for (int i = 1; i <= x; i++)
		result *= i;
	return result;
}

// 递归求阶乘
int factorial1(int x)
{
	// 基准情况
	if (x == 1)
		return 1;
	return factorial1(x - 1) * x;
} // 因为递归至少需要额外的栈空间开销，所以递归的效率往往比循环低一些，不过在很多数学问题上，递归可以让代码非常简洁。

// 斐波那契数列：1，1，2，3，5，8，13，21，34…… ， 它的规律是当前数字是前两个数字之和。
int Farr(int x)
{
	if (x == 1 || x == 2)
		return 1;
	return Farr(x - 1) + Farr(x - 2);
}

int main()
{
	cout << "斐波那契数列的第1个数为：" << Farr(1) << endl;
	cout << "斐波那契数列的第2个数为：" << Farr(2) << endl;
	cout << "斐波那契数列的第9个数为：" << Farr(9) << endl;
	cout << "斐波那契数列的第10个数为：" << Farr(10) << endl;
}