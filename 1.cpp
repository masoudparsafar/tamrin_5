#include <iostream>

using namespace std; 

int main()
{
	int temp, n, m, i , j; 
	cout << "enter a number : "; 
	cin >> n; 
	int numbers[100] = { 0 };
	m = n - 1; 
	numbers[m] = 1;
	for (i = 0; i < n; i++)
	{
		cout << endl;
		for (j = 0; j <= i; j++)
		{
			temp = numbers[m + j] + numbers[m + j + 1];
			cout << temp << " "; 
			numbers[m + j] = temp; 
		}
		m--;
	}
	cout << endl; 
	system("pause");
	return 0;
}