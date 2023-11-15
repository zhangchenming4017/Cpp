#include<iostream>
using namespace std;

// 定义一个结构体
struct StudentInfo
{
	string name;
	int age;
	double score;
}stu2, stu3 = { "王五",19,80.0 };   //定义结构体后立即创建对象，***此创建对象的方法不推荐***
//对stu2而言，没有进行赋值初始化，那么所有数据被将被初始化为初始值；算术类型的默认值就是0；名字name是一个空字符串，成绩和年龄都是0

//不同的初始化方式效果相同，在不同位置定义的对象作用域不同；
//一般在代码中，会将结构体的定义和对象的创建分开，便于管理

//定义一个函数来输出一个数据对象的完整信息
void printinfo(StudentInfo stu)
{
	cout << "学生姓名：" << stu.name << "\t年龄：" << stu.age << "\t成绩：" << stu.score << endl;
}

int main()
{
	//*** 创建数据对象并进行初始化 ***
	
	//** 列表初始化 **
	StudentInfo stu = { "张三",18,75.0 };
	StudentInfo stu1 { "李四",17,70.0 };
	//** 使用另一个结构体对象进行赋值 ** (区别于普通数组)
	StudentInfo stu4 = stu3;

	//访问结构体中的数据 不同于访问数组中数据的下标运算符，这里运用的是成员运算符（点号.），后面跟上成员的名称

	//cout << "学生姓名：" << stu.name << "\t年龄：" << stu.age << "\t成绩：" << stu.score << endl;
	
	stu2.name = "赵六";
	stu2.age = 16;
	stu.score = 85.0;
	
	printinfo(stu);
	printinfo(stu1);
	printinfo(stu2);
	printinfo(stu3);

	cout << "——————————————————————————————————————————————————————\n" << endl;
	
	//***结构体数组***
	StudentInfo s[3] = {
		{"小明",18,91.0},
		{"小刚",17,85.5},
		{"小红",18,59.9}
	};

	//***遍历***
	printinfo(s[0]);
	s[2].score = 100;
	cout << s[2].score << endl;

	for (StudentInfo stu : s)
		printinfo(stu);
}