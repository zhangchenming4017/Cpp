#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//Ĭ�ϳ�ʼ��
	vector<int> v1;
	//�б��ʼ��(������ʼ��)
	vector<char> v2 = { 'a','b','c' };
	vector<char> v3{ 'a','b','c' };
	vector<char>vv = v2; //��������ͨ���飬���Խ��������ں����ı�����ֵ
	for (int num : v3)    //���numΪint���ͣ������Ϊ97 98 99�����ַ�a,b,c��ʮ������
		cout << num << '\t';
	cout << endl;
	for (char num : vv)  //���numΪchar���ͣ������Ϊa b c�����ַ�a,b,c����
		cout << num << '\t';
	cout << endl;
	//ֱ�ӳ�ʼ��
	vector<short> v4(5); //�����Ԫ��
	vector<long> v5(5, 100); //�����Ԫ�أ���ÿ��Ԫ�ض�Ϊ100

	//����Ԫ��
	cout << v5[3] << endl;
	v5[3] = 25;
	cout << v5[3] << endl;
	// cout << v5[5] << endl; //����ķ��ʣ�����vector������

	//����
	cout << "v5�ĳ���Ϊ�� " << v5.size() << endl;
	for (int i = 0; i < v5.size(); i++)
		cout << v5[i] << '\t';
	cout << endl;
	
	//���Ԫ�� �����������飩
	v5.push_back(69);
	for (int num : v5)
		cout << num << '\t';
	cout << endl;

	//����������ӵ����Ԫ��
	for (int i = 10; i > 0; i--)
		v1.push_back(i);
	for (int num : v1)
		cout << num << '\t';
	cout << endl;

	//vector�����������
	//�����Ǹ��ײ���������ͣ����ȹ̶������ܽ��٣���ȫ��û�б��ϣ������ܸ��ã�����Ч�ʸ�
	//vector��ģ���࣬��������ϲ���󣻳��Ȳ���������ǿ��ȱ��������Ч�ʵ�
	/*����vector�⣬c++11��������һ��arrayģ���࣬��������������ƣ������ǹ̶��ģ������ӷ��㣬��ȫ��
	  ʹ����ʵ�������У�һ���Ƽ����ڹ̶����ȵ�����ʹ��array�����̶����ȵ�����ʹ��vector��*/

	cin.get();
}