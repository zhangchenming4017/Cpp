#include<iostream>
#include<fstream>
//C++��IO�����ṩ��ר�������ļ������ifstream��������ı������ofstream��
//Ҫʹ��������Ҫ����ͷ�ļ�fstream��
#include<string>
using namespace std;

int main()
{
	ifstream input("input.txt");//��������������������cin
	//ifstream���ڶ�ȡ�ı����ݣ���istream���ƣ�
	// Ҳ����ͨ�������������>>������ȡ�����ʡ����ո�ָ�����ͨ��getline��������ȡһ�У�ͨ��get��������ȡһ���ַ�

	ofstream output("output.txt");

    //1.���յ��������ȡ
	//string word; //����word��ȡ�ı���ÿ������
	//while (input >> word)
	//	cout << word << endl;

	
	
	//2.���ж�ȡ
	/*
	string line;
	while (getline(input, line))
		cout << line << endl;
	*/

	

	//3.get��������ַ���ȡ
	char ch;
	while (input.get(ch))
		//cout << ch << endl;
		output << ch << endl;

	

}
