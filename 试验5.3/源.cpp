#include"长方柱.h"
using namespace std;
int main() {
	cube cube1, cube2, cube3;
	
	cube1.setData();
	cube2.setData();
	cube3.setData();


	cout << "这三个立方柱的体积是:" << endl << cube1.cal() << endl << cube2.cal() << endl << cube3.cal() << endl;


	return 0;
}