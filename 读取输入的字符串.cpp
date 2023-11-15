#include<iostream>
#include<string>
using namespace std;

int main()
{
	//*** 使用输入操作符读取单词 ***
	//标准库iostream，可以使用内置的cin对象，调用重载的输入操作符>>来读取键盘输入
	//这种方式的特点是：忽略开始的空白符，遇到下一个空白符（空格，回车，制表符等）就会停止。
	/*所以对于
	string str;
	cin >> str; //输入“hello world”
	cout << str;
	那么我们输入的“hello world”，被str读取的就只有“hello”相当于读取一个单词*/
	//剩下的“world”其实也没丢，而是保存在输入流的“输出队列”里，如果我们想读取更多输入信息，就需要使用更多的string对象来获取
	
	//string str1;
	//cin >> str1; //此处输入“hello world”
	//cout << "str1 = " << str1 << endl;
	//cin.get();
	//cin.get();
	//用本地调试的这里的窗口会消失，无法保持，
	// 这是因为我们输入“hello world”时不光输入了一个单词，第一个单词捕获的是hello，然后其他内容还是在输入流的输入队列里面
	//所以这里的两个cin.get() 得到的都是后边输入的字符空格和“world”。

	//1 使用于输入操作符“>>”读取单词
	//string str1, str2;
	//cin >> str1 >> str2; //此处输入“hello world”
	//cout << str1 << str2 << endl;  //输出为“helloworld”
	//cin >> str2;
	//cout << "str2 = " << str2 << endl;
	
	
	//2 用getline读取一行信息，需要引入string
	string str3;
	getline(cin, str3);  //最后的回车符不会被cin.get()捕获
	//getline函数有两个参数：一个是输入流对象cin，另一个是保存字符串的string对象；
	//它会一直读取输入流中的内容，直到遇到换行符为止，然后把所有内容保存到string对象。
	cout <<"str3 = "<< str3 << endl;

	//3 使用cin.get()捕获一个字符
    char ch1,ch2;
	ch1 = cin.get();
	cin.get(ch2); //效果与上一行相同
	cout << "ch1 = " << ch1 << endl;
	cout << "ch2 = " << ch2 << endl;

	cin.get();
	cin.get();
	

	//***总结***
	/*
	1. cin >> 变量1 >> 变量2 >> ... >> 变量n, 加上最后的一个回车, 一共需要（n + 1）个接受，
	但语句“cin >> 变量1 >> 变量2 >> ... >> 变量n”包含n个接受，所以要保持页面，需要加两个cin.get()
	而且，如果在给不同变量赋值间，可以加无限个空格和回车而不需要接受，

	2. 如果在语句“cin >> 变量1 >> 变量2 >> ... >> 变量n”后跟着一个语句“cin>>变量”
	在完成对语句“cin >> 变量1 >> 变量2 >> ... >> 变量n”的赋值后输入一个回车确定赋值，
	则语句“cin >> 变量1 >> 变量2 >> ... >> 变量n”最后的确定回车并不会被跟着的语句“cin>>变量”接收，
	且不会被这一跟着的语句“cin>>变量”后的“cin.get()”接收，相当于两个cin语句间第一个cin的回车所需的接受被忽略了
	
	3. 如果在语句“cin >> 变量1 >> 变量2 >> ... >> 变量n”后跟着一个语句“cin.get(变量)”
	在完成对语句“cin >> 变量1 >> 变量2 >> ... >> 变量n”的赋值后输入一个回车确定赋值，
	则语句“cin >> 变量1 >> 变量2 >> ... >> 变量n”最后的确定回车会被跟着的语句“cin.get(变量)”接收

	*/
}