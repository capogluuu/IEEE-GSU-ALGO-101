#include <iostream>
#include <vector>

using namespace std;
int ternarySearch(vector<int> ar, int key )
{
	int l = 0;
	int r = ar.size();
	while (r >= l) {
		int mid1 = l + (r - l) / 3;
		int mid2 = r - (r - l) / 3;

		if (ar[mid1] == key) {
			return mid1;
		}
		if (ar[mid2] == key) {
			return mid2;
		}

		if (key < ar[mid1]) {
			r = mid1 - 1;
		}
		else if (key > ar[mid2]) {
			l = mid2 + 1;
		}
		else {
			l = mid1 + 1;
			r = mid2 - 1;
		}
	}
	return -1;
}
int main()
{
	int element;
	vector<int> orderedArray;
	orderedArray = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Lutfen bulunmasini istediginiz elemanı giriniz : ";
	cin >> element;
	//Find index number of Element
	int index = ternarySearch(orderedArray, element);
	if (index == -1) 
	{
		cout << "Aradiginiz numara serinin icinde bulunamamistir";
	}
	else 
	{
		cout << "Aradiginiz numara serinin icindeki indexi = " << index;
	}
}
