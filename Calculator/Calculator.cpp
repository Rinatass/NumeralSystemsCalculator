
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#define getch() _getch()

using namespace std;
void menu();
void decimalToBinary();
void decimalToHexidecimal();
void binaryToHexidecimal();
void binaryToDecimal();
void hexidecimalToDecimal();
void hexidecimalToBinary();



int main()
{
	setlocale(LC_ALL, "rus");
	menu();
	cout << "\nПродолжаем? y/n";
	int ch;
	ch = _getch();
	while (ch == 'y')
	{
		cout << "\n";
		menu();
		ch = _getch();
		cout << "Продолжаем? y/n";
	}
}


void menu()
{
	cout << "1.Перевод из десятичной в двоичную систему счисления\n";
	cout << "2.Перевод из двоичной в десятичную систему счисления\n";
	cout << "3.Перевод из десятичной в шестнадцатеричную систему счисления\n";
	cout << "4.Перевод из шестнадцатеричной в десятичную систему счисления\n";
	cout << "5.Перевод из двоичной в шестнадцатеричную систему счисления\n";
	cout << "6.Перевод из шестнадцатеричной в двоичную систему счисления\n";
	cout << "7.Выход из\n";

	int ch;
	ch = _getch();

	switch (ch)
	{
	case('1'):
		decimalToBinary();
		break;

	case('2'):
		binaryToDecimal();
		break;

	case('3'):
		decimalToHexidecimal();
		break;

	case('4'):
		hexidecimalToDecimal();
		break;

	case('5'):
		binaryToHexidecimal();
		break;

	case('6'):
		hexidecimalToBinary();
		break;

	case('7'):
		exit(0);
		break;
	default:
		break;
	}
}

void decimalToBinary()
{
	string result;
	int num;
	cout << "Введите число: ";
	cin >> num;
	cout << endl;

	while (num > 0)
	{
		result += to_string(num % 2);
		num = num / 2;
	}
	reverse(result.begin(), result.end());
	cout << result;
}

void decimalToHexidecimal()
{
	string result;
	int num;
	cout << "Введите число: ";
	cin >> num;
	cout << endl;

	while (num > 0)
	{
		switch (num % 16)
		{
		case (10):
			result += "A";
			break;
		case (11):
			result += "B";
			break;
		case (12):
			result += "C";
			break;
		case (13):
			result += "D";
			break;
		case (14):
			result += "E";
			break;
		case (15):
			result += "F";
			break;
		default:
			result += to_string(num % 16);
			break;
		}
		num = num / 16;
	}
	reverse(result.begin(), result.end());
	cout << result;
}


void binaryToDecimal()
{
	string num;
	int size, result = 0;
	cout << "Введите число: ";
	cin >> num;
	cout << endl;
	int degree = 0;
	size = num.size();
	for (int i = size - 1; i >= 0; i--)
	{
		result = result + (atoi(&num[i]) * pow(2 , degree));
		degree++;
		num.erase(num.end() - 1);
	}
	cout << result;
}

void hexidecimalToDecimal()
{
	string num;
	int size, result = 0;
	cout << "Введите число: ";
	cin >> num;
	cout << endl;
	int degree = 0;
	size = num.size();
	for (int i = size - 1; i >= 0; i--)
	{
		switch (num[i])
		{
		case('A'):
			result = result + (10 * pow(16, degree));
			break;
		case('B'):
			result = result + (11 * pow(16, degree));
			break;
		case('C'):
			result = result + (12 * pow(16, degree));
			break;
		case('D'):
			result = result + (13 * pow(16, degree));
			break;
		case('E'):
			result = result + (14 * pow(16, degree));
			break;
		case('F'):
			result = result + (15 * pow(16, degree));
			break;
		default:
			result = result + (atoi(&num[i]) * pow(16, degree));
			
			break;
		}
		degree++;
		num.erase(num.end() - 1);

		
	}
	cout << result;
}

void binaryToHexidecimal()
{
	string num;
	int size, result = 0;
	cout << "Введите число: ";
	cin >> num;
	cout << endl;
	int degree = 0;
	size = num.size();
	for (int i = size - 1; i >= 0; i--)
	{
		result = result + (atoi(&num[i]) * pow(2, degree));
		degree++;
		num.erase(num.end() - 1);
	}
	
	int num1 = result;
	string res;
	while (num1 > 0)
	{
		switch (num1 % 16)
		{
		case (10):
			res += "A";
			break;
		case (11):
			res += "B";
			break;
		case (12):
			res += "C";
			break;
		case (13):
			res += "D";
			break;
		case (14):
			res += "E";
			break;
		case (15):
			res += "F";
			break;
		default:
			res += to_string(num1 % 16);
			break;
		}
		num1 = num1 / 16;
	}
	reverse(res.begin(), res.end());
	cout << res;
	
}

void hexidecimalToBinary()
{
	string num;
	int size, result = 0;
	cout << "Введите число: ";
	cin >> num;
	cout << endl;
	int degree = 0;
	size = num.size();
	for (int i = size - 1; i >= 0; i--)
	{
		switch (num[i])
		{
		case('A'):
			result = result + (10 * pow(16, degree));
			break;
		case('B'):
			result = result + (11 * pow(16, degree));
			break;
		case('C'):
			result = result + (12 * pow(16, degree));
			break;
		case('D'):
			result = result + (13 * pow(16, degree));
			break;
		case('E'):
			result = result + (14 * pow(16, degree));
			break;
		case('F'):
			result = result + (15 * pow(16, degree));
			break;
		default:
			result = result + (atoi(&num[i]) * pow(16, degree));

			break;
		}
		degree++;
		num.erase(num.end() - 1);


	}
	int num1 = result;
	string res;

	while (num1 > 0)
	{
		res += to_string(num1 % 2);
		num1 = num1 / 2;
	}
	reverse(res.begin(), res.end());
	cout << res;
}