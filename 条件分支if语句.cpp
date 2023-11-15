#include<iostream>
using namespace std;

int main()
{
	//语句就是使用各种运算符，作用在数据对象上，就得到“表达式”，一个表达式末尾加上分号，就构成“表达式语句”
	int a = 0;  //变量定义并初始化语句
	a + 1;      //算术表达式语句，没意义，只执行了加法操作，却没把结果保存下来（赋值给变量），也没有任何附带效果（如最后一句输出）
	++a;        //递增语句，a的值变为1
	cout << "a = " << a << endl;  //输出语句
	; //空语句
	//流程控制语句，需要用{}把一组语句序列包成一个整体，叫做“复合语句”，也叫“块”

	int age;
	cout << "please enter your age :";
	cin >> age;


	//1 if语句 单分支
	/*
	if (age >= 18)
	{
		cout << "欢迎成年人。" << endl;
	}
	*/

	//2 if else语句 双分支
	/*
	if (age >= 18)
	{
		cout << "欢迎成年人。" << endl;
	}
	else
	{
		cout << "不欢迎未成年人。" << endl;
	}
	*/

	//使用条件运算符进行实现()
	//age >=18 ? cout << "欢迎成年人。" << endl: cout << "不欢迎未成年人。" << endl;
	//cout << (age >= 18 ? "欢迎成年人。" : "不欢迎未成年人。") << endl;  

	//嵌套分支（多分支）

	if (age >= 18)
	{
		cout << "欢迎成年人。" << endl;
		if (age < 35)
		{
			cout << "加油年轻人。";
		}
	}
	else
	{
		cout << "不欢迎未成年人。" << endl;
		if (age >= 15)

			cout << "好好学习，青年" << endl;//可以加{}，也可不加

		else
		{
			cout << "小朋友不要玩电脑" << endl;
		}
	}


	//嵌套分支的另一种写法
	/*
	if (age <= 12)
		cout << "小朋友不要玩电脑" << endl;
	else if (age <= 18)
		cout << "好好学习，少年" << endl;
	else if (age <= 35)
		cout << "加油，年轻人" << endl;
	else if (age <= 60)
		cout << "你好，中年人" << endl;
	else
		cout << "好好休息，老年人" << endl;
	*/
}