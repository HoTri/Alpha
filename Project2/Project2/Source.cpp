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
			array[i][j] = rand()%10001 +-5000;
		}
	}
}

void XuatMaTran(int array[][Max], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<< array[i][j]<<"  ";
		}
		cout << endl;
	}
}

int KiemTraCotToanAm(int array[][Max], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (array[i][n] > 0) return 0;
	}
	return 1;
}

int main()
{
	int a[Max][Max];
	int m, n, check1=0;
	NhapMaTran(a, m, n);
	XuatMaTran(a, m, n);
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		int check;
		check = KiemTraCotToanAm(a, m, j);
		if (check == 1)
		{
			check1 = 1;
			cout << "Cot " << j << endl;
			for (int i = 0; i < m; i++)
			{
				cout << a[i][j] << endl;
			}
		}
	}
	if (check1 == 0) cout << "Khong co cot nao toan am.";
	return 0;
}