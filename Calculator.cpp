#include <iostream>

using namespace std;

int main() {
	int x, y, z, sum, product, subtract , division;
	cout << "Calculator :\n";
	cout << "1 for addition :\n";
	cout << "2 for multiplication :\n";
	cout << "3 for subtraction : \n";
    cout << "4 for Division : \n"
	cout << "Enter your choice (1-4) : ";
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
    case 4:
        division = z/y;
        cout << division;
	default:
		cout << "Invalid Input, Try Again!";
		main();
	}
}
