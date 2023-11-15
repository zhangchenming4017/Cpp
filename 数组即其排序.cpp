#include<iostream>
using namespace std;

int main()
{
	//数组的定义
	int a0[10];
	int x;
	//int aa[x];  //错误，元素值必须为常量

	//数组的初始化
	int a1[5] { 1,2,3,4,5 }; //"="可以省略
	double a2[] = { 1.7,2.59,3.7 };//如果做了初始化，数组定义的元素可以省略，编译器可自行判断
	short a3[10] = { 1,2,3 };//初始值小于元素个数，列表中的值初始化靠前的元素，剩余元素用默认值填充，整型的默认值是0
	//long a4[2] = {3,6,9}; //错误，初始值太多
	//int a5[4] =a3; //错误，不能用另一数组对数组赋值
	char c[10];
	int d[10];  //如果未作初始化，数组中的元素的值都是未定义的；为0xcc （1100 1100）。
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	cout << "-------------------------------------------------------------------\n" << endl;

	//访问
	int a[] = { 1,2,3,4,5,6,7,8 }; //n个元素的数组排序按照 0~（n-1）
	cout << "a[2] = " << a[2] << endl; //结果为3
	a[2] = 36;
	cout << "a[2] = " << a[2] << endl;//结果为36
	// cout << "a[8] = " << a[8] << endl;  //错误，访问到一个未定义，未做初始化的空间，可能是系统占用的内存，如果更改，将十分危险！！！

	//获取数组长度  数据所占空间 = 数据类型所占空间大小 * 元素个数
	cout << "a数组所占空间大小为： " << sizeof(a) << endl;
	cout << "a数组中每个元素所占空间大小为： " << sizeof(a[0]) << endl;
	int aSize = sizeof(a) / sizeof(a[0]);
	cout << "a数组的长度为： " << aSize << endl;

	cout << "a = " << a << endl;// 输出为 00 00 00 2E E2 2F F5 E8 是一个十六位十六进制字符，每一个字符占四个二进制位，所以占8个字节。代表a数组的存放的位置，即地址

	//遍历
	for (int i = 0; i < aSize; i++)// 严防数组越界情况发生
	{
		cout << "a[" << i << "] = " << a[i] << endl;// 使用下标运算符时，传入的数据可以是变量
	}
	for (int num : a) // 没法捕获元素的下标
	{
		cout << num << endl;
	}
	cout << "-------------------------------------------------------------------\n" << endl;

	//多维数组（方阵）“数组的数组”
	//初始化
	int ia1[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int ia2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int ia3[][4] = { 1,2,3,4,5,6,7 };//行数可以省略，列数不能省略

	//访问
	cout << "ia1[1][2] = " << ia1[1][2] << endl; //第2行第3列的数7

	//计算二维数组中的行数和列数
	cout << "ia1总大小： " << sizeof(ia1) << endl;
	cout << "ia1每一行的大小： " << sizeof(ia1[0]) << endl;
	cout << "ia1每一个元素的大小： " << sizeof(ia1[0][0]) << endl;
	int rowCnt = sizeof(ia1) / sizeof(ia1[0]);
	int colCnt = sizeof(ia1[0]) / sizeof(ia1[0][0]);

	//遍历
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

	//数组的选择排序 （一般使用双重for循环）
	//1.遍历数组，扫描最小值 2.元素交换，最小值放在起始位置 3.第二轮扫描，从第二个位置开始，扫描第二小的数
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
	//数组的冒泡排序 （一般使用双重for循环）
	//1.遍历数组，一次比较相邻的两个值 2.遇到某个元素比后面的大，就交换 3.一轮扫描结束后，可以保证最大的值被交换到末尾位置，再开始第二轮
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

	cout << "——————————————————————————————————————————————————————————————————————\t" << endl;

	//练习
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
