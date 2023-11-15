#include<iostream>
#include<iostream>
using namespace std;

// *** 传值参数 *** (直接将一个实参的值，拷贝给形参做初始化的传参方式，被称为“值传递”；这样的参数就被称为“传值参数”)
int cubesum(int x, int y)
{
	return pow(x, 3) + pow(y, 3);
}
// ** 传值的困扰 **
//值传递这种方式很简单，但是面对一些特殊需求就很麻烦：传入一个数据对象，让它经过处理后，发生改变。
//例如，传入一个整数x，调用之后它的值要加一
//但如果直接：
//void increase(int x)
//{
//	++x;
//} //这样是行不通的

//因此我们可以：
void increase(int* x)
{
	++(*x);
} //但这样每次都要解引用，很麻烦

// *** 传引用参数 ***
void increase(int& x)
{
	++x;
}

// *结论* 可见函数会执行以下操作：数据类型 形参 = 实参；

// 传引用的好处除此之外，还能避免拷贝，当函数要操作的对象很庞大时，如何做值拷贝会影响效率
// 比如定义一个函数比较两个字符串的长度，需要将字符串作为参数传入。因为字符串可能非常长，直接拷贝不是一个好选择，这时我们往往选择传递引用
void longer_str(const string& str1, const string& str2)
{
	cout << "更长的的字符串是: " << ((str1.size() > str2.size()) ? str1 : str2) << endl;
}

// ** 使用常量引用做形参 **
// 好处是既可以避免数据对象可能的改变，也扩大了调用时能传的实参的范围。除此之外，除了用字面值常量进行初始化，也可以用变量做初始化

// *** 数组形参 ***
// 
//** 遍历数组元素进行打印 **
// void printarray(const int arr[]){}

//void printarray(const int* arr){};

//void printarray(const int arr[5]) {};
// 以上三种定义方式，本质上是一样的，形参的类型都是const int*；
// 虽然第3种方法指定了数组的长度，但由于编译器还是会把传入的数组名解析成指针，事实上数组的长度都无法判断。
// 那么遍历数组时，怎么知道数组的长度呢？ 以下提供三种思路

//（1）规定结束标记
// 规定一种结束标记，遇到这个标记就代表当前的数组已经遍历完了，典型的代表就是c语言风格的字符串，以空字符'\0'为结束标志的char数组。
// 这种方法比较复杂，而且太多特殊规定也不适合int这样的数据类型

//（2）把数组长度当作形参
void printarray(const int* arr, int size) {};

// (3) 使用数组引用作为形参
void printarray(const int(&arr)[5]) //"int(& arr)[5]"相当于数组的引用。如果把括号去掉（int& arr[5]），相当于引用的数组
{
	for (int num : arr)
		cout << num << "\t";
	cout << endl;
}



int main()
{
	int m(2), n(5);
	cout << "2和5的立方和为：" << cubesum(m, n) << endl;
	//在上面cubesum函数的调用中，实参m,n的值被拷贝给了形参x,y。

	int i = 6;
	/*increase(i);
	cout << "i = " << i << endl;*/ // i的值还是6。

	increase(&i);
	cout << "i = " << i << endl; // i的值是7。

	
	cout << "——————————————————————————————————————————————————————————————\t" << endl;

	increase(i);
	cout << "i = " << i << endl; // i的值为8.
	
	string STR = "我想吃饭睡觉打豆豆"; string str = "你想我";
	longer_str(STR, str);
	

	cout << "——————————————————————————————————————————————————————————————\t" << endl;
	
	int arr[5]{ 1,2,3,4,5 };
	printarray(arr);
}