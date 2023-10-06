#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y, R;
	cout << " R = "; cin >> R;
	cout << " x = "; cin >> x;

	if (x <= -2)
		y = 1;
	else
		if (0 < x && x <= R)
			y = R - sqrt(R * R - x * x);
		else
			if (R < x && x <= 2 * R)
				y = sqrt(R * R - (x - R) * (x - R));
			else
				y = -(x - R / 6 - 2 * R);

	cout << endl;
	cout << " y = " << y << endl;

	cin.get();
	return 0;
}