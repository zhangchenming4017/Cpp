#include<iostream>
#include<string>
//stringͷ�ļ�������xstring���棬����ͨ��iostream�������ã���Ϊ������ʹ��string���͵Ĺ��ܣ���û�������һ��stringͷ�ļ�
using namespace std;

int main()
{
	//Ĭ�ϳ�ʼ��
	string s1;
	
	//������ʼ��
	string s2 = s1;
	string s3 = "hello world";

	//ֱ�ӳ�ʼ��
	string s4("hello world!");
	string s5(8, 'h');
	cout << s5 << endl;

	//���� ��vector��Ԫ�صķ�������
	//string���ַ���������Ҳ�Ǵ�0��ʼ��
	//stringͬ����һ����Ա����size�����Ի�ȡ�ַ����ĳ���
	//�������ֵΪ���ַ�������-1��������Խ��
	//����ʹ����ͨforѭ���ͷ�Χforѭ�����б���
	cout << "s4[2] = " << s4[2] << endl;
	cout << "s4[5] = " << s4[5] << endl;// ***�ո�Ҳ��Ԫ��***
	s4[0] = 'H';
	cout << s4 << endl;
	s4[s4.size() - 1] = '\?';
	cout << s4 << endl;

	//����
	for (int i = 0; i < s4.size(); i++) //���һ������������Ӱ��
		s4[i] = toupper(s4[i]); //Сд��ĸת��д
	cout << s4 << endl;

	//�ַ���ƴ��
	string str1 = "hello", str2(" world");
	string str3 = str1 + str2;
	cout << str3 << endl;

	string str4 = str1 + "," + str2 + '!';
	cout << str4 << endl;

	// string s5 = "hello, " + "world!";   //���� �����ַ������͵�����ֵ��������ֱ������Ӳ���
	
	// ��Ϊstring������c++Ϊ�����ṩ�ı�׼��ģ���࣬��ʵ�Ƕ�c���ַ�����һ����չ
	//���c++Ҫ��c���ݵĻ����ַ������͵�����ֵ���������Ͳ�����string������char���͵��ַ�����
	//����Ҫ�����ַ���ƴ�ӣ�����Ҫ����һ��string���͵Ķ��󣬲��ܵ���string���涨��������

	// string str6 = "fuck" + " the" + str2;  //������Ȼ���string����Ͷ���ַ�������ֵ���������������
	// ���ǣ�ǰ���ǰ��������ɣ�ÿ����ӱ��뱣֤��һ��string���󣬼���һ���͵ڶ�������������һ����string����

	//***����***
	/*char s5[] = { 'h','e','l','l','o' ,'\0' };
	string ss = s5 + str2;
	cout << ss << endl;
	s5Ϊchar���͵����飬�����ַ������͵�����ֵ�������޷�����ƴ��
	*/

	//�Ƚ��ַ���
	str1 = "hello";
	str2 = "hello world";
	str3 = "hehehe";
	cout << (str1 == str2 ? "true" : "false") << endl; //false
	cout << (str1 < str2 ? "true" : "false") << endl;  //true
	cout << (str1 >= str3 ? "true" : "false") << endl;  //true
	//��������ַ���������ͬ��ÿ��λ�ð������ַ�Ҳ����ͬ����ô���ߡ���ȡ���������ȡ�
	//��������ַ������Ȳ���ͬ�����϶̵��ַ���ÿ���ַ������ϳ����ַ�����Ӧλ�õ��ַ���ͬ����ô�϶��ַ�����С�ڡ��ϴ��ַ���
	//��������ַ�����ĳ��λ���Ͽ�ʼ����ͬ����ô�ͱȽ������ַ���ASCII�룬�ȽϽ�����Ǵ����������ַ��Ĵ�С��ϵ



}