#include <iostream>

using namespace std;

double my_pow(double chis, int step) {
	double k = 1;
	if (step < 0) {
		step = -step;
		for (int i = 0; i < step; i++) {
			k = k * chis;
		}

		return 1 / k;
	}
	else {
		for (int i = 0; i < step; i++) {
			k = k * chis;
		}
		cout << k << endl;
		return k;
	}
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