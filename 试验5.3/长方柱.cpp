#include "������.h"
using namespace std;

void cube::setData()
{
	double value1, value2, value3;
	cout << "���������ݣ��������ߣ�" << endl;
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
