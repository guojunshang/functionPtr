/* writen by shangguojun 2017.7.3

*����ָ���ʵ��
*map��ʹ��

*�ܽ� ������ָ�롢��̬��ģ����÷�����
����ָ�룺һ�����ֿ���ָ������������Щ�����ķ���ֵ�������б���ͬ��
��̬��һ������ĺ������������б�������ͬ
ģ�壺һ������ĺ������������б�������ͬ�����Ͳ�ͬ
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
	fuc_choose["mul"] = mul_num;//&�ǿ�ѡ��
	//fuc_choose["dect"] = dec;
	//int  result = fuc_choose[argv[1]](atoi(argv[2]), atoi(argv[3]));
	//cout << "The result is: " << fuc_choose[argv[1]](atof(argv[2]), atof(argv[3])) << endl;
	//cout << "The result is: " << dect(12,47.5) << endl;
	//cout<<12.454<<endl;
	
	cout << "The result is: " << fuc_choose["add"](12,25) << endl;
	

	///////////////////////////////////////////////////////////////
	//ptrf��һ������ָ��
	//pf��һ������ָ������
	int(*ptrf)(int, int);
	ptrf = &add_num;
	pf pfins=&add_num;
	int result2=pfins(100,200);
	cout << "The result2 is: " << result2 << endl;

	system("PAUSE");
}

//Let us get a git test 2019.9.24
//The secend git test 2019.9.24