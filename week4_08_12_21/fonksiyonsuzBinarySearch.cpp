#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int element;
	int index = -1;
	vector<int> orderedArray;
	orderedArray = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Lutfen bulunmasini istediginiz elemaný giriniz : ";
	cin >> element;
	//Find index number of Element
	int first = 0;
	int last = orderedArray.size();

	while (first <= last)
	{
		int mid = (first + last) / 2;
		if (orderedArray[mid] == element)
		{
			index = mid;
			break;
		}
		else if (orderedArray[mid] > element)
		{
			last = mid - 1;
		}
		else if (orderedArray[mid] < element)
		{
			first = mid + 1;
		}
	}
	if (index == -1) {
		cout << "Aradiginiz numara serinin icinde bulunamamistir";
	}
	else {
		cout << "Aradiginiz numara serinin icindeki indexi = " << index;
	}
}