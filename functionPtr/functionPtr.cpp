/* writen by shangguojun 2017.7.3

*函数指针的实现
*map的使用

*总结 函数的指针、多态、模板的用法区别
函数指针：一个名字可以指向多个函数（这些函数的返回值、参数列表相同）
多态：一个具体的函数名，参数列表数量不同
模板：一个具体的函数名，参数列表数量相同，类型不同
*/


#include<iostream>
#include<string>
#include<map>
#include <utility>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

//template <typename T>
//T dec(T num1,T num2)
//{
	//return num1 - num2;
//}

int add_num(int firstnum, int secondnum)
{
	//cout << "The result is: " << firstnum + secondnum << endl;
	return firstnum + secondnum;
}

int mul_num(int firstnum, int secondnum)
{
	//cout << "The result is: " << firstnum * secondnum << endl;
	return firstnum * secondnum;
}


typedef int (*pf)(int, int);
typedef map<string, pf> FUCTION;
FUCTION fuc_choose;

//int main(int argc, char** argv)
int main()
{
	fuc_choose["add"] = &add_num;
	fuc_choose["mul"] = mul_num;//&是可选的
	//fuc_choose["dect"] = dec;
	//int  result = fuc_choose[argv[1]](atoi(argv[2]), atoi(argv[3]));
	//cout << "The result is: " << fuc_choose[argv[1]](atof(argv[2]), atof(argv[3])) << endl;
	//cout << "The result is: " << dect(12,47.5) << endl;
	//cout<<12.454<<endl;
	
	cout << "The result is: " << fuc_choose["add"](12,25) << endl;
	

	///////////////////////////////////////////////////////////////
	//ptrf是一个函数指针
	//pf是一个函数指针类型
	int(*ptrf)(int, int);
	ptrf = &add_num;
	pf pfins=&add_num;
	int result2=pfins(100,200);
	cout << "The result2 is: " << result2 << endl;

	system("PAUSE");
}

//Let us get a git test 2019.9.24
//The secend git test 2019.9.24