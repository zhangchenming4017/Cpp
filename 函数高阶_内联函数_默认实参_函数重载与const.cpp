#include<iostream>
#include<string>
using namespace std;

// *** �������� & Ĭ��ʵ��***
inline string stuinfo(string name, int age = 18, double score = 69)
{
	string info = "ѧ��������" + name + "\t���䣺" + to_string(age) + "\t������" + to_string(score);
	return info;
}

// *** �������� ***
string stuinfo(string name, int age, string gender)
{
	string info = "ѧ��������" + name + "\t���䣺" + to_string(age) + "\t�Ա�" + gender;
	return info;
}

// ** const���������ز��� **
void fun(int x)
{
	cout << x << endl;
}

// ������Ϊ�βΣ�������const��ȫ�ȼ�
//void fun(const int x)
//{
//	cout << x << endl;
//}

// ��������ʱ������Ǵ�ֵ������������ֻ��ʶ����ʵ�ε����ͣ�������int���͵ı������ǳ��������Ը�int���͵ı����ͳ������и�ֵ

// ͬ��
void fun2(int* p){}
// void fun2(int* const pc){} 
//��������£�const����Ӱ�촫�뺯����ʵ�����ͣ����Ը�����const�Ķ�����һ���ģ�
//�����������const������ʱ����������ͬ���޷����к������ء�

//��һ�������ͬ���Ǿ��Ǵ����ò�������ʱ�����const���Σ��ͳ��ˡ����������á�������һ��������ֻ���ó����������󶨣�������ʹ����ͨ����
void fun3(int& x) { cout << 1 << endl; }
void fun3(const int& x) { cout << 2 << endl; }	// �β������ǳ������ã�����һ���µĺ���
// ���ʵ����һ����������ô���õ������泣���������βεĺ����������ʵ����һ�����������ȵ������治��const�ĺ����������������������������������

// ���Ƶģ�����һ�������ĵ�ַ��ֻ���ɡ�ָ������ָ�롱��ָ������������ʹ����ָͨ��
void fun4(int* p){}
void fun4(const int* cp){}	//�β�������ָ������ָ�룬����һ���µĺ���

// ��������������������������á�����ָ������ָ�롱���£�const�����˷��ʵ����ݶ����ǳ�������������ײ�const��

int main()
{
	cout << stuinfo("����", 18, 69.5) << endl;
	cout << stuinfo("����", 19) << endl;
	// cout << stuinfo("����", , 69.5) << endl; �����д��
	// cout<<stuinfo(,,70) �����д��
	cout << stuinfo("С��", 20, "��װֱ����") << endl;

	int i = 1;
	const int j = 1;
	fun3(i);	//���Ϊ��1�����õ��ǡ�void fun3(int& x) { cout << 1 << endl; }��
	fun3(j);	//���Ϊ��2�����õ��ǡ�void fun3(const int& x) { cout << 2 << endl; }��
}