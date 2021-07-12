#include"myVector.h"
#include<iostream>

using namespace std;

int main()
{
	myVector<int> vector;
	vector.push_back(3);
	cout << vector.getCapacity() << ' ';
	cout << vector.getSize() << '\n';
	vector.push_back(5);
	cout << vector.getCapacity() << ' ';
	cout << vector.getSize() << '\n';
	vector.insert(10, 0);
	cout << vector.getCapacity() << ' ';
	cout << vector.getSize() << '\n';
	vector.pop_back();
	cout << vector.getCapacity() << ' ';
	cout << vector.getSize() << '\n';
	vector.reserve(1000);
	vector.push_back(45);
	cout << vector.getCapacity() << ' ';
	cout << vector.getSize() << '\n';
	for (int i = 0; i < vector.getSize(); i++)
	{
		cout << vector.at(i) << ' ';
	}
	cout << endl;

	return 0;
}