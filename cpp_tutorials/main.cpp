#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	int c = a + b;
	cout << "����� �����: " << c;
	cin >> a;
	return 0;
}

