#include<iostream>
#include<string>
//string头文件包含在xstring里面，可以通过iostream进行引用，但为了完整使用string类型的功能，最好还是引入一个string头文件
using namespace std;

int main()
{
	//默认初始化
	string s1;
	
	//拷贝初始化
	string s2 = s1;
	string s3 = "hello world";

	//直接初始化
	string s4("hello world!");
	string s5(8, 'h');
	cout << s5 << endl;

	//访问 跟vector内元素的访问相似
	//string内字符的索引，也是从0开始；
	//string同样有一个成员函数size，可以获取字符串的长度
	//索引最大值为（字符串长度-1），不能越界
	//可以使用普通for循环和范围for循环进行遍历
	cout << "s4[2] = " << s4[2] << endl;
	cout << "s4[5] = " << s4[5] << endl;// ***空格也算元素***
	s4[0] = 'H';
	cout << s4 << endl;
	s4[s4.size() - 1] = '\?';
	cout << s4 << endl;

	//遍历
	for (int i = 0; i < s4.size(); i++) //最后一个‘？’不受影响
		s4[i] = toupper(s4[i]); //小写字母转大写
	cout << s4 << endl;

	//字符串拼接
	string str1 = "hello", str2(" world");
	string str3 = str1 + str2;
	cout << str3 << endl;

	string str4 = str1 + "," + str2 + '!';
	cout << str4 << endl;

	// string s5 = "hello, " + "world!";   //错误， 两个字符串类型的字面值常量不能直接做相加操作
	
	// 因为string类型是c++为我们提供的标准库模板类，其实是对c的字符串的一种拓展
	//因此c++要与c兼容的话，字符串类型的字面值常量的类型并不是string，而是char类型的字符数组
	//所以要进行字符串拼接，必须要基于一个string类型的对象，才能调用string里面定义的运算符

	// string str6 = "fuck" + " the" + str2;  //错误，虽然多个string对象和多个字符串字面值常量可以连续相加
	// 但是，前提是按照左结合律，每次相加必须保证有一个string对象，即第一个和第二个必须至少有一个是string对象

	//***存疑***
	/*char s5[] = { 'h','e','l','l','o' ,'\0' };
	string ss = s5 + str2;
	cout << ss << endl;
	s5为char类型的数组，而非字符串类型的字面值常量，无法进行拼接
	*/

	//比较字符串
	str1 = "hello";
	str2 = "hello world";
	str3 = "hehehe";
	cout << (str1 == str2 ? "true" : "false") << endl; //false
	cout << (str1 < str2 ? "true" : "false") << endl;  //true
	cout << (str1 >= str3 ? "true" : "false") << endl;  //true
	//如果两个字符串长度相同，每个位置包含的字符也都相同，那么两者“相等”；否则“相等”
	//如果两个字符串长度不相同，而较短的字符串每个字符都跟较长的字符串对应位置的字符相同，那么较短字符串“小于”较大字符串
	//如果两个字符串在某个位置上开始不相同，那么就比较两个字符的ASCII码，比较结果就是代表这两个字符的大小关系



}