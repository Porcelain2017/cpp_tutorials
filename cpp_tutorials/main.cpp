#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "¬ведите первое число: ";
	cin >> a;
	cout << "¬ведите второе число: ";
	cin >> b;
	int c = a + b;
	cout << "—умма чисел: " << c;
	cin >> a;
	return 0;
}

