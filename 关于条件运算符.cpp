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
	//������������
	cout << "_____________________________����Ϊֹ��_________________________________________" << endl;
	int x(5), y(0), z(1), m;
	z ? y = x + 10 : y = 3 * x - 1;//����z����ֵ����y����ѡ��ֵ����z��Ӱ��
	cout << "z = " << z << endl;//���Ϊ1
	cout << "y = " << y << endl;//���Ϊ15
	z = 0, y = 0;

	15;
	(z) ? 10 : 3;
	cout << "z = " << z << endl;//��(z) ? 10 : 3��������ʽ��ֵ��3������û�и�ֵ�����������ڴ�������ֵ������15�����˴����z��ȻΪ0

	m = (z) ? y = x + 10 : y = 3 * x - 1;//�ȸ���z����ֵ����y��ֵΪ14�����ұ��ʽ��(z) ? y = x + 10 : y = 3 * x - 1����ֵΪ14������m
	cout << "y = " << y << endl;//���Ϊ14
	cout << "m = " << m << endl;//���Ϊ14



}