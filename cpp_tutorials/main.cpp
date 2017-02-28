#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(0, "");
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

