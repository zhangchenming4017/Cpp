#include<iostream>
using namespace std;

int main()
{
	int a(4), b(6), c(8);
	bool t(true), f(false);
	cout << "t = " << t << endl; // 输出为”1“，布尔型输出不为‘true’或‘false’而是底层的1和0，类似于字符型
	int m, x = 5;
	bool n = true, y = false;
	m = a > b;//实质上为布尔型赋值给整数型
	cout << "m = " << m << endl;//输出为”0“
	cout << "n = " << n << endl;//输出为“1”
	cout << "布尔（false） + 整型（5）=" << (y + x) << endl;//输出为“5”
	int  p = 036L;//036L为字面值常量的整型
	cout << "p = " << p << endl;//输出为30
	bool btrans(25);
	cout << "btrans = " << btrans << endl;//输出为“1”整型赋给布尔型
	short strans(false);
	cout << "strans = " << strans << endl;//输出为“0”布尔型赋给整型
	//如果赋值运算符两侧的对象数据类型不一致，那么就把右侧的对象转换成左侧对象的数值
	//1 隐式类型转换
	short s = 15.2 + 20;//15.2为double类型
	cout << "s = " << s << endl;  //结果为35
	cout << "15.2 + 20 = " << (15.2 + 20) << endl;  //结果为35.2，被转换成精度更大的double类型
	cout << "s 的长度为： " << sizeof s << endl;  //结果为2
	cout << "15.2 + 20 的长度为： " << sizeof(15.2 + 20) << endl;  //结果为8，被转换成精度更大的double类型
	// 关系运算中的类型转换
	a = -1;
	cout << ((0 < a < 100) ? "true" : "false") << endl;  //错误表达 a处于0到100之间 结果为“true”
	cout << ((0 < a && a < 100) ? "true" : "false") << endl;  //正确表达 结果为“false”
	// 尽量避免将较大类型的值赋给较小类型的变量
	s = 32767;  //s为短整型
	cout << "s + 1 = " << s + 1 << endl;   //结果为 32768
	//因为“1”为int类型的字面值常量，计算机自动对数据（s + 1）进行了“整数提升”变为int类型
	s++;
	cout << "s  = " << s << endl;  //结果为 -32768 s仍为短整型，+1 会超过原本的长度
	//2 强制类型转换 谨慎使用 会干扰正常的类型检查
	int total(20), num(6);
	double avg = total / num; //因为total和num都为整型，所以“（total/num）”也为整型
	cout << "avg = " << avg << endl;  //结果为3

	//c语言风格： （类型名称）值
	cout << "avg = " << (double)total / num << endl;  //结果为3.33333
	//c++函数风格：  类型名称（值）
	cout << "avg = " << double(total) / num << endl;  //结果为3.33333
	//c++强制转换类型：  static_cast<类型名称>（值）
	cout << "avg = " << static_cast<double>(total) / num << endl;  //结果为3.33333







}