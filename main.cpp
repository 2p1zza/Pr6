#include <iostream>

using namespace std;

double my_pow(unsigned int step, double chis)
{
	double k = 1;
	for (int i = 1; i <= step; i++)
	{
		k = k * chis;
	}
	return k;
}
int main()
{
	unsigned int a;
	double b, k;
	cout << "enter the degree and number\n";
	cin >> a >> b;
	k = my_pow(a, b);
	cout << " = " << k;
}