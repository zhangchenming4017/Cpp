#include<iostream>
using namespace std;

int main()
{
	//break

	int i(1);
	while (true)
	{
		cout << "hello world" << endl;
		cout << "�����ǵ�" << i++ << "��ѭ��\n" << endl;  //�˴���i++���Լ򻯴���
		if (i > 10)
		{
			break;
		}
	}
	cout << "��������������������������������������������������������������������" << endl;
	//continue

	for (int num(1); num <= 100; num++)
	{
		cout << '\t';
		if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
		{
			if (num == 70)
				cout << '\n';
			continue;
		}
		cout << num;
		if (num % 10 == 0)
		{
			cout << endl << endl;
		}
	}
	cout << "��������������������������������������������������������������������" << endl;

	//goto

	int x = 0;
begin:
	do
	{
		cout << "x = " << ++x << endl;
	} while (x < 10);
	if (x < 15)
	{
		cout << "����ԭ��" << endl;
		goto begin;
	}

	cin.get();
}