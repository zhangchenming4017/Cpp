#include<iostream>
using namespace std;

int main() 
{
	//*** (��ͨ)���õĶ��� ***
	const int two = 2;
	int a = 10, b = 20;
	int& ref = a;  //ref �� a������
	//int& ref2;   //�������ñ����ʼ��
	//int& ref2 = 10;  //���ܴ�������ֵ����������
	//int& ref2 = two;   //��������ͨ����ȥ�󶨳���
	cout << "ref = " << ref << endl;   //ref����a��ֵ

	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "ref�ĵ�ַ��" << &ref << endl;  //ref �� a�ĵ�ַ��ȫһ��
	//���ñ����Ͼ���һ�������������������ݶ������б�����洢���ݣ����Ǻͳ�ʼ����ֵ�󶨣���֮�󲻿ɸ���
	
	ref = b;
	cout << "a = " << a << endl; //aΪ20

	//** ���õ����� **
	int& rref = ref;
	rref = 25;
	cout << "a = " << a << endl; //aΪ25

	//*** �������� ***
	const int zero = 0;
	const int& cref = zero; //����������
	//cref = 10;  //���󣬲��ܶԳ�����ֵ
	const int& cref2 = 10;  //��ȷ������������ֵ��������ʼ��
	int i = 35;
	const int& cref3 = i;  //��ȷ��������һ����������ʼ��
	double d = 3.14;
	const int& cref4 = d;  //��ȷ��d����ת����int���ͣ����ð󶨵���һ������ʱ����
	//�������ú���ͨ���õ����ò�ͬ�����ĳ�ʼ��Ҫ����ɺֻܶ࣬Ҫ�ǿ���ת������ָ�����͵����б��ʽ��������������ʼ����
	
	//*** ��ָ������� ***
	int* ptr = &a;
	int*& pref = ptr;
	*pref = 100;
	cout << "a = " << a << endl; //aΪ100
	
	//û��ָ�����õ�ָ��
	//int&* rptr = &ref;   //�������ò������ݶ���

}