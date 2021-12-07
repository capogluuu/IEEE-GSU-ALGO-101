#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>  array, int element) {
	int index = -1;
	int first = 0;
	int last = array.size();

	while (first <= last)
	{
		int mid = (first + last) / 2;
		if (array[mid] == element)
		{
			index = mid;
			break;
		}
		else if (array[mid] > element)
		{
			last = mid - 1;
		}
		else if (array[mid] < element)
		{
			first = mid + 1;
		}
	}

	return index;
}
int main()
{
	int element;
	vector<int> orderedArray;
	orderedArray = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Lutfen bulunmasini istediginiz elemaný giriniz : ";
	cin >> element;
	//Find index number of Element
	int index = binarySearch(orderedArray, element);
	if (index == -1)
	{
		cout << "Aradiginiz numara serinin icinde bulunamamistir";
	}
	else
	{
		cout << "Aradiginiz numara serinin icindeki indexi = " << index;
	}
}