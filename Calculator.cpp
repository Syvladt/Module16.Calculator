#include<iostream>
#include<sstream>

int main()
{
	setlocale(LC_ALL, "ru");
	float operand_1, operand_2, result;
	std::string buffer;
	char action;
	bool success = false;
	std::cout << "�����������\n";
	std::cout << "������� ������ ��� ����������: ";
	std::cin >> buffer;
	std::stringstream buffer_stream(buffer);
	buffer_stream >> operand_1 >> action >> operand_2;
	if (action == '+')
	{
		result = operand_1 + operand_2;
		success = true;
	}
	else if (action == '-')
	{
		result = operand_1 - operand_2;
		success = true;
	}
	else if (action == '*')
	{
		result = operand_1 * operand_2;
		success = true;
	}
	else if (action == '/')
	{
		result = operand_1 / operand_2;
		success = true;
	}
	else
		std::cout << "����������� ��������\n";
	if (success)
		std::cout << operand_1 << ' ' << action << ' ' << operand_2 << " = " << result;
}