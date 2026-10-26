using namespace std;
#include <iostream>
#include<string>
#include<fstream>

int main()
{
	string x, y, z;

	ifstream obj1("fruit.txt");

	obj1 >> x >> y >> z;

	obj1.close();

	ofstream obj2("fruit.txt", ios::app);

	obj2 << "Fresh Fruits" << endl;

	obj2.close();
}
