#include<iostream>
using namespace std;

int main()
{
	char score;
	cout << "please enter your score :";
	cin >> score;
	switch (score)  //switch后括号里的是一个表达式，对它求值，然后转换成整数类型跟下面的case后面的值进行比较
	{
	case 'A':    //case关键字和后面的值，合起来叫一个case标签；case标签必须是一个整型的常量表达式，如字符，bool，int。字符串不可以
		cout << "成绩优秀！" << endl;
		break;    //没有break，那么匹配到某个case标签后，程序会从上至下一直执行下去。
	case 'B':
		cout << "成绩良好！" << endl;
		break;
	case 'C':
		cout << "恭喜你及格了！" << endl;
		break;
	case 'D':
		cout << "考试失败！" << endl;
		break;
	default:        //没有匹配到case标签则会执行default后的语句，default表示默认要执行的操作，是可选的。
		cout << "错误的成绩输入！" << endl;
		break;

	}
	cin.get();
	cin.get();




}