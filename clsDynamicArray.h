#include <iostream>
#include "clsDynamicArray.h"
using namespace std;
int main() {
	clsDynamicArray <int> MyArray(10);

	MyArray.SetItem(0,10);
	MyArray.SetItem(1,20);
	MyArray.SetItem(2,30);
	MyArray.SetItem(3,40);
	MyArray.SetItem(4,50);

	MyArray.Print();
	cout << "\nSize : " << MyArray.Size()<<endl;
	cout << "\nIsEmpty : " << MyArray.IsEmpty()<<endl;
	system("pause >0");
	return 0;
}
