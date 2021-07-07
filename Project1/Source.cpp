#include <iostream>
using namespace std;
void menu()
{

	cout << "\t*Menu*" << endl;
	cout << "Press 1 if you want to Add" << endl;
	cout << "Press 2 if you want to Subtract" << endl;
	cout << "Press 3 if you want to Multiple" << endl;
	cout << "Press 4 if you want to Divide" << endl;
	cout << "Press 5 if you want to exit the Program" << endl;

}
void cal(int op)
{
	if (op != 5)
	{
		int Num1, Num2;
		cout << "Enter two numbers" << endl;
		cin >> Num1 >> Num2;
		switch (op)
		{
		case 1:
			cout << Num1 <<"+"<<Num2 <<"="<<Num1 + Num2 << endl;
			break;
		case 2:
			cout << Num1 << "-" << Num2 << "=" << Num1 - Num2 << endl;
			break;
		case 3:
			cout << Num1 << "*" << Num2 << "=" << Num1 * Num2 << endl;
			break;
		case 4:
			cout << Num1 << "/" << Num2 << "=" << Num1 / Num2 << endl;
			break;
		default:
			cout << "Error!!" << endl;
			cout << "Entered wrong operator" << endl;
		}
	}
	else
	{
		cout << "Goodbye!!" << endl;
	}

}
int main()
{
	menu();
	int op;
	cin >> op;
	char i;
	cal(op);
	cout << "Do you want to continue" << endl;
	cin >> i;
	if (i == 'y' || i == 'Y')
	{
		do 
		{
			
			menu();
			cin >> op;
			cal(op);
		} while (i == 'y' || i == 'Y');
	system("CLS");
	}
	else
	{
		cout << "Goodbye!!";
	}
	system("pause");
	return 0;
}