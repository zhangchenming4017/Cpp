#include<iostream>
using namespace std;

int main()
{
	cout << "ѭ����ʼ����\n" << endl;
	//����ѭ������
	int i = 1;
	while (i <= 10)
	{
		cout << "hello world" << endl;
		cout << "�����ǵ�" << i++ << "��ѭ��\n" << endl;  //�˴���i++���Լ򻯴���
	}
	cout << "������������������������������������������������������������" << endl;
	do
	{
		cout << "goodbye world" << endl;
		cout << "�����ǵ�����" << --i << "��ѭ��\n" << endl;
	} while (i > 1);



}