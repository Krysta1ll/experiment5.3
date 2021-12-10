#include "长方柱.h"
using namespace std;

void cube::setData()
{
	double value1, value2, value3;
	cout << "请输入数据（长，宽，高）" << endl;
	cin >> value1 >> value2 >> value3;
	lenth = value1;
	width = value2;
	height = value3;

}

double cube::cal()
{
	double V;
	V = lenth * width * height;
	return V;
}
