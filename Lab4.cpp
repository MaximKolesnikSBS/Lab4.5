/*
	Автор: Максим Колесник
	Группа: СБС-001-О-01
	Задание№: 4: 5)
	Цель: Реализовать фунцию для вычисления гиперболического косинуса(граница ряда определяется как константа).
*/

#include <iostream>
#include <climits>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int value(){
	while (true){
		cout << "Enter the argument: ";
		char x;
		cin >> x;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "The entered value is not correct, please try again " << endl;
		}
		else{
			return x;
		}
	}
}
int factorial(int n){
	return (n == 0) ? 1 : n * factorial(n - 1);
}
double calculations(int x){
	double ch = 0;
	const unsigned char n = 8;
	for (int i = 0; i < n; i++){
		ch += pow(x, 2 * i) / factorial(2 * i);
	}
	return ch;
}
int main(){
	int x = value();
	double ch = calculations(x);
	cout << "Hyperbolic cosine ch(" << x << ") = " << ch << endl;
	system("pause");
	return 0;
}
