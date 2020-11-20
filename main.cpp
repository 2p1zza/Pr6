#include <iostream>

using namespace std;

double my_pow(double chis, unsigned int step) {
	double k = 1;
	while (step) {
		if (step % 2 == 0) {
			step /= 2;
			chis *= chis;
		}
		else {
			step--;
			k *= chis;
		}
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