#include<iostream>
using namespace std;

int main()
{
	//����Ķ���
	int a0[10];
	int x;
	//int aa[x];  //����Ԫ��ֵ����Ϊ����

	//����ĳ�ʼ��
	int a1[5] { 1,2,3,4,5 }; //"="����ʡ��
	double a2[] = { 1.7,2.59,3.7 };//������˳�ʼ�������鶨���Ԫ�ؿ���ʡ�ԣ��������������ж�
	short a3[10] = { 1,2,3 };//��ʼֵС��Ԫ�ظ������б��е�ֵ��ʼ����ǰ��Ԫ�أ�ʣ��Ԫ����Ĭ��ֵ��䣬���͵�Ĭ��ֵ��0
	//long a4[2] = {3,6,9}; //���󣬳�ʼֵ̫��
	//int a5[4] =a3; //���󣬲�������һ��������鸳ֵ
	char c[10];
	int d[10];  //���δ����ʼ���������е�Ԫ�ص�ֵ����δ����ģ�Ϊ0xcc ��1100 1100����
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	cout << "-------------------------------------------------------------------\n" << endl;

	//����
	int a[] = { 1,2,3,4,5,6,7,8 }; //n��Ԫ�ص����������� 0~��n-1��
	cout << "a[2] = " << a[2] << endl; //���Ϊ3
	a[2] = 36;
	cout << "a[2] = " << a[2] << endl;//���Ϊ36
	// cout << "a[8] = " << a[8] << endl;  //���󣬷��ʵ�һ��δ���壬δ����ʼ���Ŀռ䣬������ϵͳռ�õ��ڴ棬������ģ���ʮ��Σ�գ�����

	//��ȡ���鳤��  ������ռ�ռ� = ����������ռ�ռ��С * Ԫ�ظ���
	cout << "a������ռ�ռ��СΪ�� " << sizeof(a) << endl;
	cout << "a������ÿ��Ԫ����ռ�ռ��СΪ�� " << sizeof(a[0]) << endl;
	int aSize = sizeof(a) / sizeof(a[0]);
	cout << "a����ĳ���Ϊ�� " << aSize << endl;

	cout << "a = " << a << endl;// ���Ϊ 00 00 00 2E E2 2F F5 E8 ��һ��ʮ��λʮ�������ַ���ÿһ���ַ�ռ�ĸ�������λ������ռ8���ֽڡ�����a����Ĵ�ŵ�λ�ã�����ַ

	//����
	for (int i = 0; i < aSize; i++)// �Ϸ�����Խ���������
	{
		cout << "a[" << i << "] = " << a[i] << endl;// ʹ���±������ʱ����������ݿ����Ǳ���
	}
	for (int num : a) // û������Ԫ�ص��±�
	{
		cout << num << endl;
	}
	cout << "-------------------------------------------------------------------\n" << endl;

	//��ά���飨���󣩡���������顱
	//��ʼ��
	int ia1[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int ia2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int ia3[][4] = { 1,2,3,4,5,6,7 };//��������ʡ�ԣ���������ʡ��

	//����
	cout << "ia1[1][2] = " << ia1[1][2] << endl; //��2�е�3�е���7

	//�����ά�����е�����������
	cout << "ia1�ܴ�С�� " << sizeof(ia1) << endl;
	cout << "ia1ÿһ�еĴ�С�� " << sizeof(ia1[0]) << endl;
	cout << "ia1ÿһ��Ԫ�صĴ�С�� " << sizeof(ia1[0][0]) << endl;
	int rowCnt = sizeof(ia1) / sizeof(ia1[0]);
	int colCnt = sizeof(ia1[0]) / sizeof(ia1[0][0]);

	//����
	for (int i = 0; i < rowCnt; i++)
	{
		for (int j = 0; j < colCnt; j++)
		{
			cout << ia1[i][j] << '\t';
		}
		cout << endl;
	}

	for (auto& row : ia1)
	{
		for (auto num : row)
		{
			cout << num << '\t';
		}
		cout << endl;
	}

	cout << "-------------------------------------------------------------------\n" << endl;

	//�����ѡ������ ��һ��ʹ��˫��forѭ����
	//1.�������飬ɨ����Сֵ 2.Ԫ�ؽ�������Сֵ������ʼλ�� 3.�ڶ���ɨ�裬�ӵڶ���λ�ÿ�ʼ��ɨ��ڶ�С����
	int arr[] = { 5,9,2,7,4,3,12,6,1,5,7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				int t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
		}
	}
	for (int num : arr)
		cout << num << '\t';
	cout << endl;
	//�����ð������ ��һ��ʹ��˫��forѭ����
	//1.�������飬һ�αȽ����ڵ�����ֵ 2.����ĳ��Ԫ�رȺ���Ĵ󣬾ͽ��� 3.һ��ɨ������󣬿��Ա�֤����ֵ��������ĩβλ�ã��ٿ�ʼ�ڶ���
	int arr2[] = { 5,9,2,7,4,3,12,6,1,5,7,8 };
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < size2; i++)
	{
		for (int j = 0; j < size2 - i - 1; j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				int t2 = arr2[j + 1];
				arr2[j + 1] = arr2[j];
				arr2[j] = t2;
			}
		}
	}
	for (int num : arr2)
		cout << num << '\t';

	cout << "��������������������������������������������������������������������������������������������������������������������������������������������\t" << endl;

	//��ϰ
	int a[]{ 5,8,9,4,6,3,1,2,7 };
	int count = sizeof a / sizeof a[0];
	for (int i = 0; i < count; i++)
		for (int j = 0; j < count - 1 - i; j++)
			if (a[j] > a[j + 1])
			{
				int t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	for (int num : a)
		cout << num << '\t';
	cout << endl;
	int b[]{ 1,5,7,8,9,10,2,3,4,4,5 };
	int count2 = sizeof b / sizeof b[0];
	for (int i = 0; i < count2 - 1; i++)
		for (int j = i + 1; j < count2 ; j++)
			if (b[i] > b[j])
			{
				int t;
				t = b[j];
				b[j] = b[i];
				b[i] = t;
			}
	for (int num : b)
		cout << num << '\t';
	cout << endl;
	int c[]{ 1,4,8,666,45,8,8,9,4,6,1,3 };
	int count3 = sizeof c / sizeof c[0];
	for (int i = count3 - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (c[j] > c[i])
			{
				int t;
				t = c[j];
				c[j] = c[i];
				c[i] = t;
			}
	for (int num : c)
		cout << num << '\t';
	cout << endl;

}
