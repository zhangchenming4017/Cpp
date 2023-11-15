#include<iostream>
using namespace std;

int main()
{
	//字符数组（c风格字符串）
	//通过对string的了解，字符串就是一串字符的集合，本质上其实就是一个“字符的数组”
	//在c语言中，确实是用char[]类型来表示字符串的；不过为了区分纯粹的“字符数组”和“字符串”，c语言规定：字符串必须以空字符结束。
	//空字符的ASCII码为0，专门标记字符串的结尾，在程序中写作‘\0’。
	char str1[5] = { 'h','e','l','l','o' };// str1没有结尾空字符，并不是一个字符串
	char str2[6] = { 'h','e','l','l','o' ,'\0' }; // str2是一个字符串
	
	cout << "str1 = " << str1 << endl; //输出结果为 hello烫烫烫烫烫烫烫烫烫烫烫烫烫蘦ello 
	//以这种方式打印输出，是将str1当作一个字符串来输出，输出str1时，还要找到后面的一个'\0'作为它的结束标志
	
	cout << "str2 = " << str2 << endl; //输出结果为 hello

	char str3[] = "hello"; //以字符串字面值常量的形式给字符数组进行赋值
	cout << "str3 = " << str3 << endl;
	cout << "str3的长度: " << sizeof str3<< endl; // 结果为6




}