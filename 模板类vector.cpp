#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//默认初始化
	vector<int> v1;
	//列表初始化(拷贝初始化)
	vector<char> v2 = { 'a','b','c' };
	vector<char> v3{ 'a','b','c' };
	vector<char>vv = v2; //区别于普通数组，可以进行类似于函数的变量赋值
	for (int num : v3)    //如果num为int类型，输出的为97 98 99，即字符a,b,c的十进制码
		cout << num << '\t';
	cout << endl;
	for (char num : vv)  //如果num为char类型，输出的为a b c，即字符a,b,c本身
		cout << num << '\t';
	cout << endl;
	//直接初始化
	vector<short> v4(5); //有五个元素
	vector<long> v5(5, 100); //有五个元素，且每个元素都为100

	//访问元素
	cout << v5[3] << endl;
	v5[3] = 25;
	cout << v5[3] << endl;
	// cout << v5[5] << endl; //错误的访问，超过vector的容量

	//遍历
	cout << "v5的长度为； " << v5.size() << endl;
	for (int i = 0; i < v5.size(); i++)
		cout << v5[i] << '\t';
	cout << endl;
	
	//添加元素 （区别于数组）
	v5.push_back(69);
	for (int num : v5)
		cout << num << '\t';
	cout << endl;

	//向容器中添加倒序的元素
	for (int i = 10; i > 0; i--)
		v1.push_back(i);
	for (int num : v1)
		cout << num << '\t';
	cout << endl;

	//vector与数组的区别
	//数组是更底层的数据类型；长度固定，功能较少，安全性没有保障；但性能更好，运行效率高
	//vector是模板类，是数组的上层抽象；长度不定，功能强大；缺点是运行效率低
	/*除了vector外，c++11还增加了一个array模板类，它跟数组更加类似，长度是固定的，但更加方便，安全。
	  使用在实际运用中，一般推荐对于固定长度的数组使用array，不固定长度的数组使用vector。*/

	cin.get();
}