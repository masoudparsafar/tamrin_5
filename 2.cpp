#include <iostream>

using namespace std; 

int main()
{
	int n, m, j, i, num; 

	cout << "enter two numbers : ";
	cin >> n >> m; 

	for (i = 1; i <= n; i++)
	{
		cout << endl;
		for (j = 1; j <= m; j++)
		{
			num = i * j; 
			cout << num << " ";
		}
	}
	cout << endl; 

	system("pause");
	return 0;
}