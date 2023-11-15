#include<iostream>
using namespace std;
int main()
{
	int a, b, c, num1, num2;
	cout << "please enter three number: ";
	cin >> a >> b >> c;
	num1 = (a > b) ? a : b;
	num2 = (num1 > c ? num1 : c);
	cout << "the largest number is :" << num2 << endl;
	//以下用于其他
	cout << "_____________________________到此为止吧_________________________________________" << endl;
	int x(5), y(0), z(1), m;
	z ? y = x + 10 : y = 3 * x - 1;//根据z的数值，对y进行选择赋值，对z无影响
	cout << "z = " << z << endl;//输出为1
	cout << "y = " << y << endl;//输出为15
	z = 0, y = 0;

	15;
	(z) ? 10 : 3;
	cout << "z = " << z << endl;//“(z) ? 10 : 3”这个表达式的值“3”，并没有赋值操作，类似于创建字面值常量“15”，此处输出z仍然为0

	m = (z) ? y = x + 10 : y = 3 * x - 1;//先根据z的数值，将y赋值为14，并且表达式“(z) ? y = x + 10 : y = 3 * x - 1”的值为14，赋给m
	cout << "y = " << y << endl;//输出为14
	cout << "m = " << m << endl;//输出为14



}