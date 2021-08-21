#include <iostream>
using namespace std;
//#define IF_SIMPLE_CONDITION
//#define TARGET
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef IF_SIMPLE_CONDITION
	cout << "HelloControl" << endl;


	int temperature;
	cout << "Введите температуру воздуха"; cin >> temperature;

	if (temperature > 0) { cout << "На улице тепло" << endl; }
	else { cout << "На улице холодно" << endl; }

#endif // IF_SIMPLE_CONDITION

#ifdef TARGET
	int number;
	std::cout << "Введите число "; std::cin >> number;
	if (number > 0 && number < 10) { std::cout << "Вы попали в цель" << endl; }
	else { std::cout << "Вы промахнулись" << endl; }
#endif

	int temperature;
	std::cout << "Введите температуру воздуха "; std::cin >> temperature;



}
