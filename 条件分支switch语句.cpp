#include<iostream>
using namespace std;

int main()
{
	char score;
	cout << "please enter your score :";
	cin >> score;
	switch (score)  //switch�����������һ�����ʽ��������ֵ��Ȼ��ת�����������͸������case�����ֵ���бȽ�
	{
	case 'A':    //case�ؼ��ֺͺ����ֵ����������һ��case��ǩ��case��ǩ������һ�����͵ĳ������ʽ�����ַ���bool��int���ַ���������
		cout << "�ɼ����㣡" << endl;
		break;    //û��break����ôƥ�䵽ĳ��case��ǩ�󣬳�����������һֱִ����ȥ��
	case 'B':
		cout << "�ɼ����ã�" << endl;
		break;
	case 'C':
		cout << "��ϲ�㼰���ˣ�" << endl;
		break;
	case 'D':
		cout << "����ʧ�ܣ�" << endl;
		break;
	default:        //û��ƥ�䵽case��ǩ���ִ��default�����䣬default��ʾĬ��Ҫִ�еĲ������ǿ�ѡ�ġ�
		cout << "����ĳɼ����룡" << endl;
		break;

	}
	cin.get();
	cin.get();




}