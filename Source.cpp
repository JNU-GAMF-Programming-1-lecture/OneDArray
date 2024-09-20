#include <iostream>
using namespace std;

int main() {

	int arr[5] = { 1,2,3,4,5 };
	double x[10] = { 1, 10 };

	int arr2d[2][5] = { {1,2,3,4,5},   
		 {6,7,8,9,10} 
	 };
	int x2d[2][5] = {2,3};
	int x1d[10] = { 2,3 };
	bool professor_is_satisfied = true;
	srand(unsigned int(time(nullptr)));
	if (professor_is_satisfied ==true)
	{
		cout << "bonus";
	}
	else cout << "no bonus";
	for (int i = 0; i < 10; i++)
	{
		cout << x1d[i] << endl;
	}
	int j = 0;
	while (j < 10)
	{
		cout << x1d[j] << endl;
		j++;
	}

	int var;
	do
	{
		cout << "Please enter a number between 0 and 10 ";
		cin >> var;
	} while (var<0 || var > 10);






	return 0;
}