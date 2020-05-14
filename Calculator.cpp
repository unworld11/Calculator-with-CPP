#include <iostream>

using namespace std;

int main() {
	int x, y, z, sum, product, subtract;
	cout << "Calculator \n";
	cout << "1 for addition \n";
	cout << "2 for multiplication \n";
	cout << "3 for subtraction \n";
	cout << "Input : ";
	cin >> x;
	cout << "Input 1 : ";
	cin >> y;
	cout << "Input 2 : ";
	cin >> z;
	switch (x) {
	case 1:
		sum = z + y;
		cout << sum;
		break;
	case 2:
		product = z * y;
		cout << product;
		break;
	case 3:
		subtract = z - y;
		cout << subtract;
		break;
	default:
		cout << "THANKS";
	}
}