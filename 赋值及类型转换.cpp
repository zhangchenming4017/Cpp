#include<iostream>
using namespace std;

int main()
{
	int a(4), b(6), c(8);
	bool t(true), f(false);
	cout << "t = " << t << endl; // ���Ϊ��1���������������Ϊ��true����false�����ǵײ��1��0���������ַ���
	int m, x = 5;
	bool n = true, y = false;
	m = a > b;//ʵ����Ϊ�����͸�ֵ��������
	cout << "m = " << m << endl;//���Ϊ��0��
	cout << "n = " << n << endl;//���Ϊ��1��
	cout << "������false�� + ���ͣ�5��=" << (y + x) << endl;//���Ϊ��5��
	int  p = 036L;//036LΪ����ֵ����������
	cout << "p = " << p << endl;//���Ϊ30
	bool btrans(25);
	cout << "btrans = " << btrans << endl;//���Ϊ��1�����͸���������
	short strans(false);
	cout << "strans = " << strans << endl;//���Ϊ��0�������͸�������
	//�����ֵ���������Ķ����������Ͳ�һ�£���ô�Ͱ��Ҳ�Ķ���ת�������������ֵ
	//1 ��ʽ����ת��
	short s = 15.2 + 20;//15.2Ϊdouble����
	cout << "s = " << s << endl;  //���Ϊ35
	cout << "15.2 + 20 = " << (15.2 + 20) << endl;  //���Ϊ35.2����ת���ɾ��ȸ����double����
	cout << "s �ĳ���Ϊ�� " << sizeof s << endl;  //���Ϊ2
	cout << "15.2 + 20 �ĳ���Ϊ�� " << sizeof(15.2 + 20) << endl;  //���Ϊ8����ת���ɾ��ȸ����double����
	// ��ϵ�����е�����ת��
	a = -1;
	cout << ((0 < a < 100) ? "true" : "false") << endl;  //������ a����0��100֮�� ���Ϊ��true��
	cout << ((0 < a && a < 100) ? "true" : "false") << endl;  //��ȷ��� ���Ϊ��false��
	// �������⽫�ϴ����͵�ֵ������С���͵ı���
	s = 32767;  //sΪ������
	cout << "s + 1 = " << s + 1 << endl;   //���Ϊ 32768
	//��Ϊ��1��Ϊint���͵�����ֵ������������Զ������ݣ�s + 1�������ˡ�������������Ϊint����
	s++;
	cout << "s  = " << s << endl;  //���Ϊ -32768 s��Ϊ�����ͣ�+1 �ᳬ��ԭ���ĳ���
	//2 ǿ������ת�� ����ʹ�� ��������������ͼ��
	int total(20), num(6);
	double avg = total / num; //��Ϊtotal��num��Ϊ���ͣ����ԡ���total/num����ҲΪ����
	cout << "avg = " << avg << endl;  //���Ϊ3

	//c���Է�� ���������ƣ�ֵ
	cout << "avg = " << (double)total / num << endl;  //���Ϊ3.33333
	//c++�������  �������ƣ�ֵ��
	cout << "avg = " << double(total) / num << endl;  //���Ϊ3.33333
	//c++ǿ��ת�����ͣ�  static_cast<��������>��ֵ��
	cout << "avg = " << static_cast<double>(total) / num << endl;  //���Ϊ3.33333







}