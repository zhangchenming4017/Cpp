#include<iostream>
#include<fstream>
//C++的IO库中提供了专门用于文件输入的ifstream类和用于文本输出的ofstream类
//要使用它们需要引入头文件fstream。
#include<string>
using namespace std;

int main()
{
	ifstream input("input.txt");//定义输入流对象，类似于cin
	//ifstream用于读取文本内容，跟istream类似，
	// 也可以通过输入操作符“>>”来读取“单词”（空格分隔），通过getline函数来读取一行，通过get函数来读取一个字符

	ofstream output("output.txt");

    //1.按照单词逐个读取
	//string word; //利用word读取文本的每个单词
	//while (input >> word)
	//	cout << word << endl;

	
	
	//2.逐行读取
	/*
	string line;
	while (getline(input, line))
		cout << line << endl;
	*/

	

	//3.get函数逐个字符读取
	char ch;
	while (input.get(ch))
		//cout << ch << endl;
		output << ch << endl;

	

}
