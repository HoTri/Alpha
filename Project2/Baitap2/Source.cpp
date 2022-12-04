#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define Max 20

void NhapMaTran(int array[][Max], int& m, int& n)
{
	cout << "Nhap so cot : ";
	cin >> n;
	cout << "Nhap so hang : ";
	cin >> m;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			array[i][j] = rand() % 10001 + -5000;
		}
	}
}

void XuatMaTran(int array[][Max], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}
}

int main()
{
	return 0;
}