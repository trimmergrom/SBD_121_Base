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
	cout << "������� ����������� �������"; cin >> temperature;

	if (temperature > 0) { cout << "�� ����� �����" << endl; }
	else { cout << "�� ����� �������" << endl; }

#endif // IF_SIMPLE_CONDITION

#ifdef TARGET
	int number;
	std::cout << "������� ����� "; std::cin >> number;
	if (number > 0 && number < 10) { std::cout << "�� ������ � ����" << endl; }
	else { std::cout << "�� ������������" << endl; }
#endif

	int temperature;
	std::cout << "������� ����������� ������� "; std::cin >> temperature;



}
